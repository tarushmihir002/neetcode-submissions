class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int prod=1;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int height=min(heights[i],heights[j]);
                int width = j-i;
                prod=height*width;
                ans=max(ans,prod);
            }
        }
        return ans;
    }
};
