#include<bits/stdc++.h>
using namespace std;
int main()
{
   int m,n,o;
   int a[m][n][o];
   cin>>m>>n>>o;
   for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<o;k++)
            {
                cin>> a[i][j][k]<<endl;
            }
        }
    }
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            for( k=0;k<o;k++)
            {
                cout<< a[i][j][k]<<endl;
            }
        }
    }
}
