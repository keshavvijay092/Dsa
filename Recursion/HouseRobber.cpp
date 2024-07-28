class Solution {
public:
    int solveUsingRecursion(vector<int>&nums,int i)
    {
        if(i >= nums.size())
        {
            return 0;
        }

        int include = nums[i] + solveUsingRecursion(nums,i+2);
        int exclude = solveUsingRecursion(nums,i+1);

        return max(include,exclude);
    }
    int solveUsingDP(vector<int>&nums,int i,vector<int>&dp)
    {
        if(i>= nums.size()) return 0;

        if(dp[i] != -1) return dp[i];

        int include = nums[i] + solveUsingDP(nums,i+2,dp);
        int exclude = solveUsingDP(nums,i+1,dp);

        return dp[i] = max(include,exclude);
    }
    int rob(vector<int>& nums) {
        // Solve Using Recursion
        // int ans = solveUsingRecursion(nums,0);
        // return ans;
     
    //  solve Using DP
    vector<int>dp(nums.size()+1,-1);
    int ans = solveUsingDP(nums,0,dp);
    return ans;

    }
};