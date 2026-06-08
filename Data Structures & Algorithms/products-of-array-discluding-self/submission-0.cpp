class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]!=0) prod*=nums[i];
        // }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            // if(nums[i]!=0)
            for(int j=0;j<nums.size();j++){
                if(j!=i)prod*=nums[j];
            }
            ans.push_back(prod);
            prod=1;
        }
        return ans;
    }
};
