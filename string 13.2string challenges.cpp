#include<bits/stdc++.h>
using namespace std;
int main()
{

//code 1    string upper or lower case convert
  /*string s="ivhopojhpojpoy";
   // cout<<'i'-'I'<<endl;
    //convert upper case
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]>= 'a' && s[i]<='z')// string convert upper letter
            s[i] -=32;

    }
    cout<<s<<endl;// upper case print
//convert lower case
for(int i=0; i<s.size(); i++)
{

    if(s[i] >='A' && s[i] <='Z')
        s[i]+=32;
}
cout<<s<<endl;//lower case print*/



/*
// code 2  , 2nd methos string  upper and lower convert
string s="abhishektyagi";
transform(s.begin(),s.end(), s.begin(), ::toupper);//toupper convert upper case
cout<<s<<endl;
transform(s.begin(),s.end(), s.begin(), ::tolower);//tolower case convert
cout<<s<<endl;
*/


// code 3
/*
string s="66689376579874";
sort(s.begin(),s.end(), greater<int>()); // string integer no to convert sort or greater form
cout<<s<<endl;// greater<int>() convert greater number of string .
*/

string s="anbijiaaaaabbbbbnfdoihoih";
int arr[26];
for(int i=0; i<26; i++)
    arr[i]=0;
for(int i=0; i<s.size(); i++)
    arr[s[i]-'a']++;


char ans='a';
int maxf=0;
for(int i=0; i<26; i++)
{

    if(arr[i]>= maxf)
    {
        maxf=arr[i];
        ans=i+'a';
    }

}
cout<<maxf<<" "<<ans<<endl;// count frequency of string i is 2 time
    return 0;



}


