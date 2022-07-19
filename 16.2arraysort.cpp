#include<iostream>
using namespace std;

bool sort(int arr[],int n)
{
if(n==1){return true;
}
bool resarr=sort(arr+1,n-1);
return (arr[0]<arr[1] && resarr); 

}

int main()
{
    int arr[]={1,2,3,4,5}; // also check of unsorted order gives 
    cout<<sort(arr,5)<<endl;
    return 0;
}