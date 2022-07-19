#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int updatebit(int n, int pos, int value)
{   int mask=~(1<<pos);
    n=n &mask;
      return (n|(value<<pos));
}
int main()
{
    cout<<updatebit(5,1)<<endl;



/* code 3 clear bit

int clearbit(int n ,int pos)
{   int mask = ~(1<<pos);
     return (n & mask);
}
int main(){
    cout<<clearbit(5,2)<<endl;

*/






/* code 2 for set bits
int setbit(int n,int pos)
{
return(n|(1<<pos));
}
        int main()
        {
cout<<setbit(5,1)<<endl;
*/





//code 1 for getbit
//int getbit(int  n,int pos)
//{
//return ((n& (1<<pos))!=0);
//}
        // cout<<getbit(5,2)<<endl;





         return 0;
        }



