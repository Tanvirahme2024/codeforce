#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   // cout<<s;
   for(int i=0;i<s.size();i+=2)
   {
       for(int j=0;j<s.size();j+=2)
       {
           if(s[j]>s[i])
           {
               swap(s[j],s[i]);
           }
       }
   }
   cout<<s<<endl;


}
