class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int>mp;
        mp.insert({'(',-1});
        mp.insert({')',1});
        mp.insert({'{',-2});
        mp.insert({'}',2});
        mp.insert({'[',-3});
        mp.insert({']',3});
        int ans=0;

        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if( !st.empty() &&  mp[st.top()]+mp[s[i]] ==0 && mp[st.top()]<0) st.pop();
            else st.push(s[i]);
        }
        if (st.empty()) return true;
        return false;
    }
};
