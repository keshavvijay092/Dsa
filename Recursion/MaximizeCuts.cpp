Using Recursion 
 if(n<=0) return 0;
        
        int option1 = 1 + maximizeTheCuts(n-x,x,y,z);
        int option2 = 1 + maximizeTheCuts(n-y,x,y,z);
        int option3 = 1 + maximizeTheCuts(n-z,x,y,z);
        
        
        int maxi = max(option1,max(option2,option3));
        return maxi;

        Using DP 

        class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int solve(int n, int x, int y, int z,vector<int>&dp)
    {
        if(n == 0) return 0;
        if(n<0) return INT_MIN;
        
        if(dp[n] != INT_MIN) return dp[n];
        
        int opt1 =1 +  solve(n-x,x,y,z,dp);
        int opt2 = 1 + solve(n-y,x,y,z,dp);
        int opt3 = 1 + solve(n-z,x,y,z,dp);
    
        dp[n] = max(opt1,max(opt2,opt3));
        return dp[n];
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int>dp(n+1,INT_MIN);
        int ans = solve(n,x,y,z,dp);
        if(ans<0) return 0;
        return ans;
    }
};