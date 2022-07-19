#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);// fibonacci series

}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;// first 0 ,1,1,2,3,5,8,13,21
    return 0;//patter 0,1, 0+1=1,  1+1=2 ,2+1=3 ,2+3=5 ,3+5=8, 5+8=13, 8+13=21 13+21=34, 21+34=55,, 34+55=89,......
}
