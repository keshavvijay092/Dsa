// gfg 
Node* solve(Node* root, int &k, int node) {
    if (root == nullptr) return nullptr;
    
    if (root->data == node) return root;
    
    Node* left = solve(root->left, k, node);
    Node* right = solve(root->right, k, node);
    
    if (left || right) {
        k--;
        if (k == 0) {
            k = INT_MAX; // To prevent further decrements
            return root;
        }
        return left ? left : right;
    }
    
    return nullptr;
}

int kthAncestor(Node *root, int k, int node) {
   Node* ans = solve(root, k, node);
   if (ans == nullptr || ans->data == node) return -1; // Handle the case where ancestor is not found
   return ans->data;
}