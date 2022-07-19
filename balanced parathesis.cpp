#include<iostream>
using namespace std;

bool isvalid(string s)
{
    int n=s.size();
    stack<char> st;
    bool ans=true;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='{' ||  s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() and st.top()=='(')
            {
                st.pop();
            }
            else{
                 ans=false;
                 break;        
            }
        else if(s[i]==']'){
            if(!st.empty() and st.top()=='[')
            {
                st.pop();
            }
            else{    
                 ans=false;
                 break;        
            }
        }
         else if(s[i]=='}'){
            if(!st.empty() and st.top()=='{')
            {
                st.pop();
            }
            else{
                 ans=false;
                 break;        
            }
        }
    }
    if(!s.empty())
    return false;
    return ans;
    }
int main()
{
    string s="{([])}";
    {
    if(isvalid(s))
        cout<<"valid string"<<endl;
    
    else
    cout<<"not valid string ";
    }
    return 0;
}