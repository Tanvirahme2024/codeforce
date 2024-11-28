#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--)
    {
        int n;
        cin>>n;
        int x=0;
        int i=1;
       while(true)
       {
         if(i%2==1)
        {
            x-=(2*i-1);
        }
        else
        {
            x+=(2*i-1);
        }
        if(x<=-n||x>=n)
        {
            if(i%2==1)
            {
                cout<<"Kosuke"<<endl;
            }
            else{
                cout<<"Sakurako"<<endl;
            }
             break;
        }
      i++;
       }
        


       
    }
    

    return 0;
}
