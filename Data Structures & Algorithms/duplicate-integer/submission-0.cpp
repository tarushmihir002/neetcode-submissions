class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<long long, long long> mp;
        bool flag=false;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto i:mp){
            if (i.second>1){
                flag=true;
                break;
            } 
        }
        return flag;

    }
};