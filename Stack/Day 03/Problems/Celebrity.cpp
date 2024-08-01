class Solution {
  public:
  
    bool knows(vector<vector<int>>&mat,int a,int b)
    {
        if(mat[a][b] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat, int n) {
        stack<int>st;
        
        for(int i=0;i<n;i++)
        {
            st.push(i);
        }
        
        while(st.size() >1)
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            
            if(knows(mat,a,b))
            {
                st.push(b);
            }
            else
            {
                st.push(a);
            }
        }
        
        
        int rowchecker = 0;
        int colchecker = 0;
        
        for(int i=0;i<n;i++)
        {
            if(mat[st.top()][i] == 0) rowchecker++;
        }
        if(rowchecker != n) return -1;
        
         for(int i=0;i<n;i++)
        {
            if(mat[i][st.top()] == 1) colchecker++;
        }
        
        if(colchecker != n-1) return -1;
        
        
        return st.top();
    }
};