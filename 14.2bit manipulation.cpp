#include<iostream>
using namespace std;
/* code 1
 bool ispowerof2(int n){
    return (n && ! (n &n-1 ));
    }
int main()
{
     cout<<ispowerof2(14)<<endl;//powerof 2
*/

      /* code 2
      int numberofones(int n){
       int count=0;
       while(n){
            n=n&(n-1);
        count++;
       }
       return count;}
       int main()
{
       cout<<numberofones(19)<<endl;
       */

void subsets(int arr[],int n)
{
    for(int i=0; i<(1<<n); i++)
    {

        for(int j=0; j<n; j++ )
        {

                            if(i & (1<<j))
        {

            cout<<arr[j]<<" ";
        }
    }
        cout<<endl;
    }
}

int main(){
int arr[4]={1,2,3,4};
subsets(arr,4);
    return 0;
    }
