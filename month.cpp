#include<iostream>
using namespace std;
int main()
{
int month;
cout<<"Enter month  number:"
;
cin>>month;
switch(month)
{
case 1:
cout<<"January 31 days";
break;
case 2:
cout<<"Feb 28/29 days";
break;
case 3:
cout<<"March 31 days";
break;
case 4:
cout<<"Aprial 30 days";
break;
case 5:
cout<<"May 31 days";
break;
case 6:
cout<<"June 30 days";
break;
case 7:
cout<<"July 31 days";
break;
case 8:
cout<<"August 31 days";
break;
case 9:
cout<<"Sep 30 days";
break;
case 10:
cout<<"oct 31 days";
break;
case 11:
cout<<"NOv 30 days";
break;
case 12:
cout<<"Dec 31 days";
break;
default:
    cout<<"ANY month not match"<<endl;
    break;
}

return 0;}
