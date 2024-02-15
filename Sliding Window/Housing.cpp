class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0,cs=0,cnt=0;
        while(j<n){
            cs+=nums[j];
            j++;
            
            while(cs>k && i<j){
                cs-=nums[i];
                i++;
            }
            if(cs==k){
                cnt++;
            }
            
      
    }
      return cnt;
    }
};