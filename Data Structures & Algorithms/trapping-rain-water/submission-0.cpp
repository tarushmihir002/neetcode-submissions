class Solution {
public:
    int trap(vector<int>& height) {
        //sum min(leftMax,rightMax) - arr[i]
        if (height.size() == 0) return 0;
        int n=height.size();
        vector<int>pre(n),suff(n);
        pre[0]=height[0];
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],height[i]);
        }
        suff[n-1]=height[n-1];
        for(int i=n-2;i>0;i--){
            suff[i]=max(suff[i+1],height[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(height[i]<pre[i] && height[i]<suff[i])
                sum += min(pre[i],suff[i])-height[i];
        }
        return sum;
    }
};
