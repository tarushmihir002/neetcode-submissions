class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> suff(n);
        vector<int> pre(n);
        pre[0]=0;
        suff[n-1]=0;
        for(int i=0;i<n-1;i++){
            int cnt=0;
            for(int j=i+1;j<n;j++){
                if(heights[j]>=heights[i]) cnt++;
                else break;
            }
            suff[i]=cnt;
        }

        for(int i=n-1;i>0;i--){
            int cnt=0;
            for(int j=i-1;j>=0;j--){
                if(heights[j]>=heights[i])cnt++;
                else break;
            }
            pre[i]=cnt;
        }
        int maxi=INT_MIN;

        for(int i=0;i<n;i++){
            int ans= (pre[i]+suff[i]+1) * heights[i];
            maxi=max(ans,maxi);
        }

        return maxi;
    }
};
