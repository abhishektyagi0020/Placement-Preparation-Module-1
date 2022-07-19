#include<iostream>
using namespace std;
int main()
{int n1 ,n2;
cin>>n1>>n2;
if(n1>n2){
cout<<"Max number"<<n2;
}
else if(n1<n2){
cout<<"min number"<<n1;
}
else if(n1==n2)
{
    cout<<"number is equal "<<endl;
}
else{cout<<"wrong number";}

return 0;
}

