class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        queue<pair<Node*,int>>qt;
        map<int,int>mp;
        qt.push({root,0});
        
        while(!qt.empty())
        {
            auto frontNode = qt.front();
            qt.pop();
            
            Node* a = frontNode.first;
            int b  = frontNode.second;
            if(mp.find(b) == mp.end())
            {
                mp[b] = a->data;
            }
            
            if(a->left) qt.push({a->left,b-1});
            if(a->right) qt.push({a->right,b+1});
        }
        
        vector<int>ans;
        for(auto i:mp)
        {
          ans.push_back(i.second);    
        }
        
        return ans;
    }