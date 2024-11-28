#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int m[5][5];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>m[i][j];
        }
    }
    int sum=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(m[i][j]==1)
            {


                int abs1=abs(i-2);
                int abs2=abs(j-2);
                 sum=abs1+abs2;
                 cout<<sum<<endl;

            }
        }

    }


}
