#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBst(Node*& root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    if (data > root->data) {
        root->right = insertIntoBst(root->right, data);
    } else {
        root->left = insertIntoBst(root->left, data);
    }
    return root;
}

void createBst(Node*& root) {
    int data;
    cout << "Enter the data (-1 to stop): ";
    cin >> data;
    cout << endl;
    while (data != -1) {
        root = insertIntoBst(root, data);
        cout << "Enter the data (-1 to stop): ";
        cin >> data;
        cout << endl;
    }
}

void levelorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    queue<Node*> qt;
    qt.push(root);
    qt.push(NULL);

    while (!qt.empty()) {
        Node* front = qt.front();
        qt.pop();

        if (front == NULL) {
            cout << endl;
            if (!qt.empty()) qt.push(NULL);
        } else {
            cout << front->data << " ";
            if (front->left) qt.push(front->left);
            if (front->right) qt.push(front->right);
        }
    }
}

void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

Node* minRoot(Node* root){
    Node* temp = root;
    if(root == NULL) 
    {
    cout<<" Empty tree";
    return root;
    }
    while(temp->left)
    {
        temp = temp->left;
    }
    return temp;
}

Node* maxRoot(Node* root)
{
    Node* temp = root;
    if(root == NULL) 
    {
        cout<<"Empty Tree";
        return root;
    }
    while(temp->right)
    {
        temp = temp->right;
    }
    return temp;
}
bool searchRoot(Node* root,int data)
{
    if(root == NULL) return false;

    if(data == root->data) return true;
    else if(data > root->data) {
        return  searchRoot(root->right,data);
    }
    else  return searchRoot(root->left,data);

    
}

Node* deleteRoot(Node* root,int data)
{
    // delete root
    // delete normal node
    // delete leaf node 

    if(root == NULL) return NULL;

    if(root->data == data)
    {
        // root is getting deleted so which data will replace 
        // max of left and min of right it depend on 

        // case when we are at leaf node
        if(!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        // case when left mai is not null but right is null 
        else  if(root->left && !root->right)
        {
            Node* child = root->left;
            delete root;
            return child;
        }
        //  case when right mai is not null but left null hai 
        else if(root->left  == NULL && root->right != NULL)
        {
            Node* child = root->right;
           delete root;
           return child;
        }
        // 4 case when both are not null - left & right
        else
        {
              Node* maxi = maxRoot(root->left);
              root->data = maxi->data;
              root->left = deleteRoot(root->left,maxi->data);
              return root;
        }
    }
        else if(data < root->data)
        { 
             root->left = deleteRoot(root->left,data);
        }   
        else
        {
         root->right = deleteRoot(root->right,data);   
        }     
        return root;
    }

int main() {
    Node* root = NULL;
    createBst(root);
    // 50 40 70 60 20 90 -1
    cout << "Level Order Traversal:" << endl;
    levelorderTraversal(root);

    cout << "Inorder Traversal:" << endl;
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal:" << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal:" << endl;
    postorder(root);
    cout << endl;
     Node* ans = minRoot(root);
    cout<<"The min root is : "<<ans->data;
    ans = maxRoot(root);
    cout<<"The max root is : "<<ans->data;
    int element = 0;
    cout<<"Enter element to find out";
    cin>>element;
    bool answer = searchRoot(root,element);
    if(answer)cout<<" mil gya ";
    else cout<<"nhi mila"<<endl;
     int target = 0;
    cout<<"enter the element to delete"<<" ";
    cin>>target;
    root = deleteRoot(root,target);
     levelorderTraversal(root);
    return 0;
}