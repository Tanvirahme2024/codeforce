#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,cnt=0;
    int a[50];
    cin>>n>>j;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        //cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[j-1] && a[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
