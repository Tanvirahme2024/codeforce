#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    long long e,f;
    if(n%a==0)
    {
        e=n/a;
    }
    else{
        e=(n/a)+1;
    }
    if(m%a==0)
    {
        f=m/a;
    }
    else{
        f=(m/a)+1;
    }
    cout<<e*f<<endl;
}