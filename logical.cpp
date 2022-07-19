#include<iostream>
using namespace std;
int main()
{
/*
logical
&& AND OPERATION BOTH TRUE IS TRUE OTHER WISE FALSE
|| OR IF 1 IS TRUE
!  NOT OPPOSITE VALUE GIVE
  */
  int n ;
  cin>>n;
  if(n%2== 0 && n%3==0)
  {cout<<"Divisible by both"<<endl;}
  elsee if(n%2==0){cout<<"d by 2"<<endl;}
  else if(n%3==0)
  {cout<<"  d by 3"<<endl;
  }
  else{cout<<"d by none"<<endl;
  }




return 0;
}
