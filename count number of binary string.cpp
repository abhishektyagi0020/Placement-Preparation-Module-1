#include<iostream>
using namespace std;
int countstring(int n)
{
    int a[n],b[n];
    a[0]=b[0]=1;
    for(int i=0; i<n; i++)
    {
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
    }
    return a[n-1]+b[n-1];
}

   /* vector<int>fib(n+2,0);
    fib[0]=1;
    fib[1]=1;
    for(int i=2; i<=n+1; i++)
       {

       fib[i]=fib[i-1]+fib[i-2];

    }*/
 int main(){
     //int n;
     //cin>>n;
    cout <<countstring(3)<<endl;
    return 0;
}
