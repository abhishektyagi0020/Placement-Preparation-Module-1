#include<iostream>
using namespace std;
int main()
{int i=10,j=20 ;
/*/cin>>i>>j>>k;7
//int m =i-- - j-- -k--;*/
int n=i-- - i++ + --j - ++j +--i - j-- + ++i - j++;
cout<<i<<endl;
cout<<j<<endl;
cout<<n<<endl;
return 0;
}
