class Solution {
public:
    void func(vector<vector<int>>& res,vector<int>& nums,vector<int>& ans, int i,int n){
        if(i>=n){
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        func(res,nums,ans,i+1,n);
        ans.pop_back();
        func(res,nums,ans,i+1,n);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        vector<int> ans;
        func(res,nums,ans,0,n);
        return res;
    }
};