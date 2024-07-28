class Solution {
public:
    int solveUsingRecursion(vector<int>&nums,int i,int n)
    {
        if(i > n) return 0;

        int include = nums[i] + solveUsingRecursion(nums,i+2,n);
        int exclude = solveUsingRecursion(nums,i+1,n);
        return max(include,exclude);
    }

    int solveUsingDP(vector<int>&nums,int i,int n,vector<int>&dp)
    {
        if(i>n) return 0;

        if(dp[i] != -1) return dp[i];
        int include = nums[i] + solveUsingDP(nums,i+2,n,dp);
        int exclude = solveUsingDP(nums,i+1,n,dp);
        
        return dp[i] = max(include,exclude);
    }
    int rob(vector<int>& nums) {
       solve using Recursion
        int i=0;
        int n = nums.size();
        if(n == 1) return nums[0];

        int opt1 = solveUsingRecursion(nums,i,n-2);
        int opt2 = solveUsingRecursion(nums,i+1,n-1);
        

        return max(opt1,opt2);

        solve using dp
        int n = nums.size();
        vector<int>dp(n+1,-1);
         int i=0;
        if(n == 1) return nums[0];

        int opt1 = solveUsingDP(nums,i,n-2,dp);
        vector<int>dp2(n+1,-1);
        int opt2 = solveUsingDP(nums,i+1,n-1,dp2);
        
        return max(opt1,opt2);
    }
};