class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (auto &str : strs) {
            res += to_string(str.size()) + "#" + str;
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string> v;
        int i = 0;
        while (i < s.size()) {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            i = pos + 1;
            v.push_back(s.substr(i, len));
            i += len;
        
        }

        return v;

    }
};
