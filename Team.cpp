#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[3],t,sum,j,cnt=0;
    cin>>t;
   while(t--)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            cin>>n[j];
            sum=sum+n[j];
        }

        if(sum>=2)
        {
            cnt++;
        }

    }

    cout<<endl<<cnt<<endl;
}
