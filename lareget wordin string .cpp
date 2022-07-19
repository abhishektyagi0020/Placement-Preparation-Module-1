#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // largest word in string
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);   // use store same line
    cin.ignore();
    int i=0;
    int currln=0, maxlen=0;
    int start;
    int maxst=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currln > maxlen)
            {
                maxlen=currln;
                maxst=start;
            }
            currln=0;
            start=i+1;

        }
        else

        currln++;
            if(arr[i] =='\0')
            break;
            i++;
    }
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen; i++)
    cout<<arr[i+maxst];
 return 0;
}
