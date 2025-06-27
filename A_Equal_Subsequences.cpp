#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=k;i++){
            cout<<"1";
        }
        for(int j=1;j<=n-k;j++){
            cout<<"0";
        }
        cout<<endl;
    }
}