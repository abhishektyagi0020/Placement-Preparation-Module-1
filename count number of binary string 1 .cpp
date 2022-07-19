#include<iostream>
using namespace std;
int countsubstr(char str[])
{

    int ans=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='1')
        {
         for(int j=i+1; str[j]!='\0' ; j++)
                if(str[j]=='1')
                ans++;
        }
    }
    return ans;

}


int main()
{
    char str[]="00100101";
    //cin>>str[];
    cout<<countsubstr(str);
    return 0;
}
