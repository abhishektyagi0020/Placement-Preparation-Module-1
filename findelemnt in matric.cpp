#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int tar; cin>>tar;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
     int r=0, c=m-1;
     bool found = false;
     while(r<n and c>=0)
     {
         if(arr[r][c]==tar){
             found=true;
         }
         if(arr[r][c]>tar){
             c--;
         }

         else{
             r++;
         }
         if(found)
         cout<<"element found";
         else
         {
             cout<<"ELEMENT NOT FOUND"<<endl;
         }
     }
        return 0;
}


