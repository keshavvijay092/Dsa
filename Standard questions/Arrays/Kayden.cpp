class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        int sum = arr[0];
        int maxAns = arr[0];
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            if(sum<0)
            {
                sum = 0;
            }
            
            sum +=arr[i];
            maxAns = max(sum,maxAns);
        }
        return maxAns;
    }
};