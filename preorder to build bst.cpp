#include<bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node* left ,*right;
Node(int val)
{
    data=val;
    left=right=NULL;
}
};
 Node* constructbst(int preorder[],int* preidx,int key ,int min, int max,int n)
 {
     if(*preidx >= n)
     {

          return NULL;
     }

     Node* root=NULL;
     if(key > min && key < max)
     {
         root = new Node(key);
         *preidx = *preidx + 1;
         if(*preidx < n)
         {
        root->left=constructbst(preorder,preidx,preorder[*preidx],min,key, n);
         }
         if(*preidx < n)
            {
             root->right=constructbst(preorder,preidx,preorder[*preidx],key ,max,n);
         }
     }
     return root;
 }
 void printpreorder(Node* root)
 {

     if(root==NULL)
     {

         return;

     }
     cout<<root->data<<" ";
     printpreorder(root->left);
     printpreorder(root->right);
 }
 int main()
 {

 int preorder[]={10,2,1,13,11};
 int n=5;
 int pre idx=0;
 Node* root=constructbst(preorder,&preidx,preorder[0],INT_MIN,INT_MAX,n);
     printpreorder(root);
      return 0;
 }
