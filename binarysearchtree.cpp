#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int val){
    data=val;
    left=right=NULL;
}
};
  bool isbst(Node* root, Node* min=NULL, Node* max=NULL)
  {
  if(root==NULL)
 {
  return true;
  }
  if(min!=NULL && root->data <=min->data)
 {
   return false;
  }
  if(max!=NULL && root->data >=max->data)
  {
  return false;
  }
  bool leftvalid=isbst(root->left,min,root);
  bool rightvalid= isbst(root->right,root,max);
  return leftvalid and rightvalid;
  }
int main()
{
     Node* root1=new Node(1);
     root1->left=new Node(2);
     root1->right=new Node(3);
     if(isbst(root1,NULL,NULL) ){
        cout<<"valid Bst"<<endl;
        }else
     { cout<<"invalid bst"<<endl;

     }
     Node* root2=new Node(5);
     root2->left=new Node(2);
     root2->right=new Node(8);

       if(isbst(root2,NULL,NULL) ){
        cout<<"valid Bst"<<endl;
        }else
     { cout<<"invalid bst"<<endl;
     }



return 0;
}
