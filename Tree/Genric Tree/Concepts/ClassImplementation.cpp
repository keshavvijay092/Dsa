#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class ListNode{
    public:
    ListNode* left;
    ListNode* right;
    int val;
    ListNode(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }

     static ListNode* CreateBT()
    {
        cout<<"Enter the data: "<<endl;
        int data;
        cin>>data;
        if(data == -1)
        {
            return NULL;
        }

        ListNode* newNode = new ListNode(data);
        newNode->left = CreateBT();
        newNode->right = CreateBT();
        return newNode;
    }
    static void preOrder(ListNode* root)
    {
         if(!root) return ;
         
         cout<<root->val<<" ";
         preOrder(root->left);
         preOrder(root->right);
         return ;
    }
    static void inOrder(ListNode* root)
    {
      
      if(!root) return ;
         
         inOrder(root->left);
         cout<<root->val<<" ";
         inOrder(root->right);
         return ;
    }
    static void postOrder(ListNode* root)
    {
  if(!root) return ;
         
         postOrder(root->left);
         postOrder(root->right);
         cout<<root->val<<" ";
         return ;
    }
   static void LevelOrder(ListNode* root)
   {
    queue<ListNode*>qt;
    qt.push(root);
    qt.push(NULL);
    while(!qt.empty())
    {
        ListNode* node = qt.front();
        qt.pop();
        if(!node){
             cout<<endl;
        if(!qt.empty()) qt.push(NULL);
    }
        else{
        cout<<node->val<<" ";
        if(node->left) qt.push(node->left);
        if(node->right) qt.push(node->right);
        }
    }
   }
};
int main()
{
    ListNode* root = ListNode::CreateBT();
    cout<<"The Preorder Tranversal "<<endl;10;
    ListNode::preOrder(root);
    cout<<endl<<"The InOrder Tranversal ";
     ListNode::inOrder(root);
     cout<<endl<<"The Postorder Tranversal "<<endl;;
     ListNode::postOrder(root);
    cout<<endl<<"BFS "<<endl;
    ListNode::LevelOrder(root);
    return 0;
}