#include<iostream>
using namespace std;
int main()
{
int a[20],b[30],i,k,j=0,count=1,n;
cin>>n;
cout<<"Enter input frame"<<endl;
for(int i=0;i<n; i++)
cin>>a[i];
while(i<n)
 {
    if(a[i]==1)
        {

            b[j]=a[i];
            for(int k=i+1; a[k]==1 && k<n&&count<5;k++)
            {

                j++;
                b[j]=a[k];
                count++;
                if(count==5)
                {

                    j++;
                    b[j]=0;

                }
                i=k;
        }
    }
    else
        {
        b[j]=a[i];
    }
    i++;
    j++;
}

for(int i=0; i<j; i++)
    cout<<b[j]<<endl;
return 0;
}

