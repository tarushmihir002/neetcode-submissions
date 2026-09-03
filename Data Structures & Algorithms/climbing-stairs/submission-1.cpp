class Solution {
public:
    int solve(int n, vector<int>& dp){
        if( n<=2) return dp[n]=n;
        if(dp[n]!=-1) return dp[n];
        int one=solve(n-1,dp);
        int two=solve(n-2,dp);
        return dp[n]=one+two;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int ans = solve(n,dp);
        return ans;
    }
};
