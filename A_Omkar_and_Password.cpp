    #include<bits/stdc++.h>
    using namespace std;
    int main()
        {
        int t;
        cin>>t;
        int flag;
        while(t--){
            int n;
            cin>>n;
            int a[n];
            flag=0;
            for(int i=0;i<n;i++){
                cin>>a[i];

                
                if(i>0 && a[i]!=a[i-1])  flag=1;
            
            }
            if(flag==1)
                {
                    cout<<"1"<<endl;
                }
                else{
                cout<<n<<endl;}

            }
            
        }
    