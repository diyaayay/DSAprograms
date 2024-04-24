class Solution {
    void solve(vector<vector<int>> &ans,int i, vector<int> output,vector<int> nums ){
        if(i>=nums.size()){
        ans.push_back(output);
        return;
        }
        
        //exclude
        solve(ans,i+1,output,nums);


        //include
        output.push_back(nums[i]);
        solve(ans,i+1,output,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(ans,index,output,nums );

        return ans;
    }
};