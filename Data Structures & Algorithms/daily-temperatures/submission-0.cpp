class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v;
        int n=temperatures.size();
        
        for (int i=0;i<temperatures.size();i++){
            // piv=temperatures[i];
            int cnt=0;
            bool found = false;
            for(int j=i+1;j<n;j++){
                if(temperatures[j] > temperatures[i]){
                    cnt = j - i;
                    found = true;
                    break;
                }
            }
            if (found) v.push_back(cnt);
            else v.push_back(0);

        }
        return v;
    }
};