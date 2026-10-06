class Solution {
public:
    // bool isp(string pal){
    //     if(pal=='')return true;
    //     int n=pal.size();
    //     for(int i=0;i<pal.size()/2;i++){
    //         if(pal[i]!=pal[n-i-1])return false;
    //     }
    //     return true;
    // }
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            res+=countPal(s,i,i);
            res+=countPal(s,i,i+1);
        }
        return res; 
    }

    int countPal(string s, int l, int r){
        int res=0;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            res++;
            l--;
            r++;
        }
        return res;
    }
};
