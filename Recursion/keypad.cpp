class Solution {
public:
void solve(string digits,string output,vector <string> &ans,int index){
    vector <string>  combs={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    if(index>=digits.size()){
    ans.push_back(output); return;}

int value=digits[index]-'0';
    string mapping=combs[value];
    for(int i=0;i<mapping.length();i++){
        output.push_back(mapping[i]);
        solve(digits,output,ans,index+1);
        output.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        
        int i=0;
        string output;
        vector <string>ans;
        if(digits.length()==0)
        return ans;

        solve(digits,output,ans,i);

        return ans;
    }
};