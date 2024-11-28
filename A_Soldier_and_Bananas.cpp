#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    int p=0,q=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
        p=i*k;
        q+=p;
    }
    
    if(q>n)
    {
        cout<<q-n<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
