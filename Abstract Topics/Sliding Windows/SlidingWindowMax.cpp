class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // fixed sized sliding window 
        // the process 
        // 1 process the first k element 
        // remaining  elements of nums 
        //   a. removal b.addition c. store the ans 
         vector<int>ans;
         deque<int>dq;
         for(int i=0;i<k;i++)
         {
               while(!dq.empty() && nums[dq.back()]<nums[i])
               {
                dq.pop_back();
               }
                dq.push_back(i);
         }
         
         ans.push_back(nums[dq.front()]);

        //  process the remaining elements 

        for(int i=k;i<nums.size();i++)
        {
            // removal 
            while(!dq.empty() && i-dq.front() >= k)
            {
                dq.pop_front();
            }

            // addition 
            while(!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};