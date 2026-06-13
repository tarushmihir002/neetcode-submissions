class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        // string pat;
        vector<int> pat(26,0);
        vector<int> txt(26,0); 
        for(int i=0;i<n;i++){
            pat[s1[i]-'a']++;
        }
        // for(int i=0;i<m;i++){
        //     curr[s2[i]-'a']++;
        // }

        int i=0,j=0;
        while(j<m){
            txt[s2[j]-'a']++;
            if(j-i+1==n){
                if(txt==pat)return true;
                txt[s2[i]-'a']--;
                i++;
            }
            j++;
        }
        return false;

    }
};
