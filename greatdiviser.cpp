#include<bits/stdc++.h>
using namespace std;
int main()
{
int n1,n2,Great;
cin>>n1>>n2;
for(int i=1; i<=n1; i++)
{
if(n1%i==0 &&n2%i==0)
{
    Great=i;
}}
cout<<":"<<Great<<endl;

return 0;
}
