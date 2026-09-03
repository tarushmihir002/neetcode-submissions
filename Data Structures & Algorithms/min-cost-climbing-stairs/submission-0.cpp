class Solution {
public:
    int solve(vector<int>& cost, vector<int>& dp, int n) {
        if (n <= 1)
            return cost[n];

        if (dp[n] != -1)
            return dp[n];

        int one = solve(cost, dp, n - 1);
        int two = solve(cost, dp, n - 2);

        return dp[n] = cost[n] + min(one, two);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        vector<int> dp(n, -1);

        // We can start from either step 0 or step 1
        return min(solve(cost, dp, n - 1),
                   solve(cost, dp, n - 2));
    }
};