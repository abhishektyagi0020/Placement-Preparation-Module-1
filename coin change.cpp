#include<iostream>
using namespace std;
consnt int N=1e3+2;
int coinchange(vi &a, int n, int x)
{
if(x==0)
return 1;
if(x<0)
return 0;
if(dp[n][x]!=-1)
return dp[n][x];
dp[n][x]=Coinchange(a,n,x-a[n-1])+ coinchange(a,n-1,x);
return dp[n][x];
}
int main()
{
rep(i,0,N)
     { rep(j,0,N)
      dp[i][j]=-1;
      }
        int n;
        cin>>n;
        vi a(n);
        re(i,0,n);
        cin>>a[i];
        int x;
        cin>>x;

    return 0;
    }
