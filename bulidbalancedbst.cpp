#include<iostream>
using namespace std;
        struct Node
        {
        int data;
        Node *left,*right;
        Node(int val)
        {
        data=val;
        left=right=NULL;
        }
};
  Node* sortedarraytobst(int arr[],int start,int end)
    {
    if(start > end)
    {
    return NULL;
    }
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);
    root->left=sortedarraytobst(arr,start,mid-1);
    root->right=sortedarraytobst(arr,mid+1,end);
    return root;
    }
      void preorderprint(Node* root)
     {
     if(root==NULL)
     {
     return;
     }
     cout<<root->data<<" ";
     preorderprint(root->left);
     preorderprint(root->right);
     }

     int main()
     {
     int n;
     cin>>n;
     int arr[n];for(int i=0; i<n; i++){cin>>arr[i];
     }
     Node* root=sortedarraytobst(arr,0,n-1);// val 0 to n-1 index only run
     preorderprint(root);
     cout<<endl;
     return 0;
     }
