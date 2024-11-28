#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    int cnt=0;
    cin>>a;
    string s=to_string(a);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            cnt++;
        }
    
    }
      if(cnt==4||cnt==7)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
}