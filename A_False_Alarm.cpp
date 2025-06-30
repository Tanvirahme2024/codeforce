#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int a[n];
    int l=1e9,r=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
      if(a[i]==1){
            l=min(l,i);
            r=max(r,i);
        }
    }
    if(x>=r-l+1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;}
    }
   int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
   }
