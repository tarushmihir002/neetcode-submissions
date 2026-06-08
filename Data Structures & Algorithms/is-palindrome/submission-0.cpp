class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for (char c:s){
            if(c != ' ' && isalnum(c)){
                c = tolower(c);
                temp+=c;
            }
        }
        cout<<temp<<endl;
        int n=temp.size();
        for(int i=0;i<n;i++){
            if(temp[i] != temp[n-i-1]) return false;
        }
        return true;
    }
};
