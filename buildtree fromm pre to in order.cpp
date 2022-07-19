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
    int search(int inorder[],int start, int curr, int end)
    {
    for(int i=start; i<=end; i++)
    {
     if( inorder[i]==curr)
    {
    return i;
    }
    }
    return -1;
    }
Node* buildtree(int preorder[],int inorder[], int start ,int end)
    {
    static int idx=0;
    if(start>end)
    {
    return  NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* node=new Node(curr);
    if(start==end)
    {
    return node;
    }

    int pos=search(inorder,start, end, curr);
    node->left=buildtree(preorder ,inorder ,start ,pos-1);
    node->right=buildtree(preorder,inorder,pos+1,end);
    return node;
}
    void inorderprint(Node* root)
    {
    if(root==NULL)
    {
            return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
    }


int main()
{

int preorder[]={1,2,3,4,5};
int inorder[]={4,2,1,5,3};

//build tree
Node* root=buildtree(preorder,inorder,0,4);
inorderprint(root);
return 0;
}
