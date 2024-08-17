class Solution {
public:
    void PrintLeft(Node* root,vector<int>&ans)
    {
        if(!root) return ;
        if(!root->left && !root->right) return ;
        
            ans.push_back(root->data);
        if(root->left) {
            PrintLeft(root->left,ans);
        }
        else
        {
            PrintLeft(root->right,ans);
        }
        return ;
    }
    void PrintLeaf(Node* root,vector<int>&ans)
    {
        if(!root) return ;
        if(!root->left && !root->right)
        {
            ans.push_back(root->data);
        }
            PrintLeaf(root->left,ans);
            PrintLeaf(root->right,ans);
       
        return ;
    }
    void Printright(Node* root,vector<int>&ans)
    {
        if(!root) return ;
        if(!root->left && !root->right) return ;
        
        if(!root->right) {
            Printright(root->left,ans);
        }
        else
        {
            Printright(root->right,ans);
        }
            ans.push_back(root->data);
        return ;
    }
    
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        ans.push_back(root->data);
        PrintLeft(root->left,ans);
        PrintLeaf(root->left,ans);
        PrintLeaf(root->right,ans);
        Printright(root->right,ans);
        return ans;
        
    }
};