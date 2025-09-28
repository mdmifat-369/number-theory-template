#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
     string s;
     cin>>s;

     int n;
     cin>>n;

     int ans=0;
     for(int i=0;i<s.size();i++){
        ans=ans*10+(s[i]-'0');
        ans=ans%n;
     }

     if(ans%n==0)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}

int32_t main(){
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);

       int t;
       cin>>t;

       while(t--){
        solve();
       }


    return 0;
}