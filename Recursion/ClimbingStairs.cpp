// Using recursion :70Leetcode
class Solution {
public:
    int climbStairs(int n) {
        if(n == 0) return 1;
        if(n == 1) return 1;
        if(n == 2) return 2;

        return climbStairs(n-1)+climbStairs(n-2);
    }
};

// using dp 
class Solution {
public:
    int solveUsingDp(int n,vector<int>&dp)
    {
        if(n == 1 || n == 2) return n;
           dp[0] = 1;
           dp[1] = 1;
           dp[2] = 2;

         if(dp[n] != -1) return dp[n];
        dp[n] =  solveUsingDp(n-1,dp)+solveUsingDp(n-2,dp);
          return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
       int ans = solveUsingDp(n,dp);
        return ans;
      
    }
};