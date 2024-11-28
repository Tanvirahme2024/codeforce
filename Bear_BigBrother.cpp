#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=1;
    cin>>a>>b;

    for(;;)
    {
        a*=3;
        b*=2;

        if(a<=b)
        {
              cnt++;

        }
        else{
            break;}


    }
    cout<<cnt<<endl;
}
