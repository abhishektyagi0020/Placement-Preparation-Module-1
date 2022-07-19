

// write a program to find a unique number in an array where all number expect one ,are present twice.
// xorbits wise operator.
/*

a  b  a^b(zor)
0  0   0
0  1   1
1  0   11  1   0

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0; i<n; i++){
    xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int main()
{

        int arr[7]={1,2,3,4,1,2,3};
       cout<<unique(arr,7)<<endl;
        */


//write a program to find 2 unique no in an array where all umber expect two are present twice.

int setBit(int n,int pos)
{
    return ((n & (1<<pos))  !=0);
}
        void unique(int arr[],int n)
         {
         int xorsum=0;
         for(int i=0; i<n; i++)
         {
             xorsum=xorsum^arr[i];
         }
        int  tempxor=xorsum;
        int  setbit=0;
        int  pos=0;
        while(setbit !=1)
        {
            xorsum=xorsum & 1;
            pos++;
         xorsum=xorsum>>1;
        }
        int newxor=0;
        for(int i=0; i<n; i++)
            {
             if(setBit(arr[i], pos-1))
             {
                newxor=newxor^arr[i];
            }
        }
        cout<<newxor<<endl;
       cout<<(tempxor^newxor)<<endl;
         }
        int main()
        {
            int arr[]={1,2,3,1,2,3,5,7};

           unique(arr,8);
           }




