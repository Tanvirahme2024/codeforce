#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int year;
        cin>>year;

        int n=sqrt(year);
        if(n*n==year)
        {
            cout<<0<<' '<<n<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

}