class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> enc;
        
        int maxwin=0;
        int i=0,j=0;
        while(j<s.length()){
            if(enc.count(s[j])==0){
                 enc[s[j]] = j;
                maxwin = max(maxwin, j-i+1);
                j++;
            }
            else{
                 i = max(i, enc[s[j]] + 1);
                enc[s[j]] = j;
                maxwin = max(maxwin, j-i+1);
                j++;
            }
        }
        return maxwin;
    }
};