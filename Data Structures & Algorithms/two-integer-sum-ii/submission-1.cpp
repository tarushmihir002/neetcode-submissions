class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<numbers.size();i++)mp[numbers[i]]=i;
        for(int i=0;i<numbers.size();i++){
            int diff=target-numbers[i];
            if(mp.count(diff) && mp[diff]!=i) return {i+1,mp[diff]+1};

        }
        return {};
    }
};
