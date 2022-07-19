#include<bits/stdc++.h>
//#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int r,c;
	cin>>r>>c;
	int a[r][c];
	for(int i=0; i<r; i++)
	{
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    // transpose matric
	int transpose[c][r];
    for(int i=0; i<r;++i)
    for(int j=0; j<c; ++j)
    {
        transpose[j][i]=a[i][j];
    }
    for(int i=0; i<c; ++i)
    for(int j=0; j<r; ++j)
    {
        cout<<" "<<transpose[i][j];
        if(j==r-1)
        cout<<endl;
    }
    return 0;
}
