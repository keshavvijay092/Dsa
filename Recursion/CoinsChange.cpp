class Solution {
public:
    int solveUsingRecursion(vector<int>&coins,int amount)
    {
        if(amount == 0) return 0;
        int mini = INT_MAX;

        for(int i=0;i<coins.size();i++)
        {
            int coin = coins[i];
            if(coin<=amount)
            {
                int ans = solveUsingRecursion(coins,amount-coin);
                if(ans != INT_MAX) 
                {
                    int finalAns = 1 + ans;
                    mini = min(mini,finalAns);
                }
            }
        }
        return mini;
    }
    int solveUsingMemo(vector<int>&coins,int amt,vector<int>&dp)
    {
        if(amt == 0) return 0;
        if(dp[amt] != -1) return dp[amt];

        int mini = INT_MAX;

        for(int i=0;i<coins.size();i++)
        {
            int coin = coins[i];
            if(coin<=amt)
            {
                int ans = solveUsingMemo(coins,amt-coin,dp);
                if(ans != INT_MAX) 
                {
                    int finalAns = 1 + ans;
                    mini = min(mini,finalAns);
                }
            }
        }
        dp[amt]= mini;
        return dp[amt];
    }
    int coinChange(vector<int>& coins, int amount) {
        
        // solve using recursion 
        // int ans = solveUsingRecursion(coins,amount);
        // if(ans == INT_MAX)
        // return -1;
        // else
        // return ans;
  
    //    solve using dp 
  
       vector<int>dp(amount+1,-1);
        int ans = solveUsingMemo(coins,amount,dp);
        if(ans == INT_MAX)
        return -1;
        else
        return ans;

    }
};