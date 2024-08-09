class Solution {
public:

static bool lexicoCompare(string s1 ,string s2){
 
    return s1+s2>s2+s1;
}
    string largestNumber(vector<int>& nums) {
        vector<string> strs;
        for(auto i :nums){
            strs.push_back(to_string(i));
        }

        sort(strs.begin(), strs.end(), lexicoCompare);
         string result;
        for (const string& str : strs) {
            result += str;
        }

        if(result[0]=='0'){
            return "0";
        }


        return result;
    }
};