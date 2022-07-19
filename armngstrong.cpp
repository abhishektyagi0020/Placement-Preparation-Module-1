#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    int orig=n;
    while(n>0){
    int lastdigit=n%10;
    sum+=pow(lastdigit,3);

    n=n/10;
    }if(sum==orig){
        cout<<"Armngstrong"<<endl;

    }else{
        cout<<"not armnstrong"<<endl;
    }

    return 0;
}
