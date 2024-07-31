class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
       
       stack<int>st;
       vector<int>ans(n,-1);
       
       for(int i=0;i<n;i++)
       {
           while(!st.empty() && a[i]<=a[st.top()])
           {
               st.pop();
           }
           if(!st.empty() && a[st.top()]<a[i])
           {
               ans[i] = a[st.top()];
           }
           st.push(i);
       }
       return ans;
    }
};