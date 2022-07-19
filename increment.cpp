#include<iostream>
using namespace std;
int main()
{
    int i=1 , j=2,k;

k = i + j + i++ + j++ + ++i + ++j;
cout<<k<<end;

return 0;
}
