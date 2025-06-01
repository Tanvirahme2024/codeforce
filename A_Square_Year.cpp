#include <bits/stdc++.h>

using namespace std;

void year()
{
    int n;
    cin>>n;
    int sqr=ciel(sqrt(n));
    if(sqr*sqr==n)
    {
        cout<<0<<' '<<sqr<<endl;
    }
    else
    cout<<-1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    year();

}