#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* InsertIntoBst(Node* &root,int data)
{
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if(data<root->data)
    root->left = InsertIntoBst(root->left,data);
    else 
    root->right = InsertIntoBst(root->right,data);

    return root;
}
void CreateBst(Node* &root)
{
    int data;
    cout<<"Enter the data"<<" ";
    cin>>data;
    while(data !=-1)
    {
        root = InsertIntoBst(root,data);
        cout<<"enter the data"<<" ";
        cin>>data;
    }
}

void levelorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    queue<Node*> qt;
    qt.push(root);
    qt.push(NULL);
cout <<endl;
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
Node* bstfromin(int inorder[],int s,int e)
{
    if(s>e) return NULL ;

     int mid = s + (e - s) / 2;

    int element = inorder[mid];
    Node* root = new Node(element);
    
    // baaki recursion  
    root->left = bstfromin(inorder,s,mid-1);
    root->right = bstfromin(inorder,mid+1,e);
    return root;
}
int main()
{// 50 40 70 60 20 90 -1
    Node* root = NULL;
    CreateBst(root);
    levelorderTraversal(root);
    int inorder[] = {1,2,3,4,5,6,7};
    int n = 7;
    int s = 0;
    int e = n-1;
    cout<<endl<<"Creating BST from inorder"<<endl;

   root = bstfromin(inorder,s,e);
    levelorderTraversal(root);
    return 0;
}