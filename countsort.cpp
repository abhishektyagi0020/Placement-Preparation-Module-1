#include<bits/stdc++.h>
using namespace std;

void countsort(int arr[],int n){
    int k=arr[0];
    for(int i=0; i<n; i++)
    {
        k=max(k,arr[i]);
    }
    int count[10]={0};
    for(int i=0; i<n; i++)
        count[arr[i]]++;
    }

    }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<arr[i]<<end;

    return 0;
}
