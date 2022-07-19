#include <iostream>
using namespace std;
int main()
{
    // palindrome
    int n;
    cin>>n;
    char str[n+1];
    cin>>str;
    bool check=1;
    for(int i=0; i<n; i++)
    {
        if(str[i] != str[n-1-i])
        {
            check=0;
            break;
        }
    }
        if(check ==true)
        cout<<"palindrome"<<endl;
        else
       { cout<<"not palindrome"<<endl;}
 return 0;
}
