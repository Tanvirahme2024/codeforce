#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,len;

    for(i=n;n<0;i--)    {
        string s;
        cin>>s;
        len=s.length();
        if(len>10)
        {
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }

    }
}
