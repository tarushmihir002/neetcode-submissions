class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r = n-1;
        int maxW=0;

        while(l<r){
            int w=r-l;
            int h=min(heights[l],heights[r]);
            int area= w*h;
            maxW = max(maxW,area);
            if(heights[l]<heights[r])l++;
            else r--;
        }
        return maxW;
    }
};
