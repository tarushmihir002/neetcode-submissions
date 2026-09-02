class Solution {
public:
    vector<vector<int>> res;
    void solve(vector<int>& ans, vector<int>& nums,int i, int n,int target){
        if(target==0){
            res.push_back(ans);
            return;
        }
        if(target<0 || i>=nums.size())return;
        // sum+=nums[i];
        ans.push_back(nums[i]);
        solve(ans,nums,i,n,target-nums[i]);
        ans.pop_back();
        solve(ans,nums,i+1,n,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> ans;
        // int sum=0;
        solve(ans,nums,0,nums.size(),target);
        return res;
    }
};
