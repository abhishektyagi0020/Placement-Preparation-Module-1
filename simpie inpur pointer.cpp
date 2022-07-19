#include <iostream>
using namespace std;
int main() {
   // cout<<"Hello World!";
   int var=100;

   int *ptr= &var;
   cout<<*ptr<<endl; // *ptr value of variable
   *ptr = 200;
   cout<<ptr<<endl;// ptr(pointer) address of pointer variable
   cout<<*ptr<<endl; //update value of pointer
   return 0;

}
