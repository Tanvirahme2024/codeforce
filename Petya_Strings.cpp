#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,ss1,ss2;
    cin>>s1>>s2;
   // cout<<s1<<s2;
   for(int i=0;i<s1.length();i++)
   {
       ss1=toupper(s1[i]);
       ss2=toupper(s2[i]);
        if(ss1==ss2)
       {
           continue;
           }
       else if(ss1>ss2)
       {

           cout<<1<<endl;
           break;


       }

       else{cout<<-1<<endl;}
       break;

   }
    if(ss1==ss2)
       {
           cout<<0<<endl;
           }


}
