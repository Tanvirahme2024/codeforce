#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    string s2;
    char s1;

    for(int i=0;i<s.size();i++)
    {
         s1=tolower(s[i]);
      if(s1=='a'||s1=='e'||s1=='i'||s1=='o'||s1=='u'||s1=='y')
      continue;
    
    else
    {
        s2+=".";
        s2+=s1;
    }
    }
    cout<<s2<<endl;
}