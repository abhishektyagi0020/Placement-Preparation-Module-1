#include<iostream>
using namespace std;
struct Node{
        int data;
        Node *left,*right;
        Node(int value)
        {
        data=value;
        left=right=NULL;
        }
        };
        Node*insertBst(Node *root,int val)
        {
        if(root==NULL)
        {return new Node(val);

         }
          if(val<root->data)
          {
          root->left =insertBst(root->left,val);
        }
        else
        {
            root->right=insertBst(root->right,val);
        }
        return root;
}
void inorder(Node *root)
{
    if(root==NULL){
    return ;
}
    inorder(root->left);/* cout<<root->data<<"  "; preorder(root->left); preorder(root->right);*/
    cout<<root->data<<" ";
    inorder(root->right);
}


        int main()
{/*
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {

        cin>>arr[i];
    }*/
        Node *root=NULL;
       // root =insertBst(root,arr[i]);

          root=insertBst(root,5);
          insertBst(root,1);
          insertBst(root,3);
          insertBst(root,4);
          insertBst(root,2);
          insertBst(root,7);


          // print preorder preorder(root);

          // print inorder
          inorder(root);
          cout<<endl;

          return 0;
}
