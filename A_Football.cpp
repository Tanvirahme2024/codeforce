#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int z,one=0,zero=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]='1')
        {
            one++;
            zero=0;
        }
        else
        {
            zero++;
            one=0;
        }
        if(one==7||zero==7)
        {
             z=1;
        }
    }
    if(z==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

   
}