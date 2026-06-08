class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s1;
        unordered_map<char,int> t1;
        for (auto it:s) s1[it]++;
        for(auto itt:t) t1[itt]++;

        if (s1==t1) return true;
        return false;
    }
};
