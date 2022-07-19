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

/*
            1
           / \
          2   3
         /\   /\
        4  5  6 7

         */
int countnodes(Node* root)
 {
     if(root==NULL){
    return 0;
}

    return countnodes(root->left)+countnodes(root->right)+1;
}

int main()
{
Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);

root->left->left=new Node(4);
root->right->right=new Node(5);

root->right->left=new Node(6);
root->left->right=new Node(7);
cout<<countnodes(root)  <<"\n";

return 0;

}
