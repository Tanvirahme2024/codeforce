#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s;
    int up=0,lo=0,i;
    for( i=0;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            lo++;
        }
        else
        {
            up++;
        }
    }
    if(lo>=up)
    {
        for(i=0;i<s.size();i++)
        {
    s1+=tolower(s[i]);
    }
       
        cout<<s1;
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
    s2+=toupper(s[i]);
        }
       
        cout<<s2;
    }
}