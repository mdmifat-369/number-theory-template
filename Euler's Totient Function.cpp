#include<bits/stdc++.h>
using namespace std;
#define int long long int
map<int,int>mp;

void primecheck(int n){
     
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n=n/i;
            }
            mp[i]=cnt;
        }
    }

    if(n>1)mp[n]=1;
}

void solve(){
    int n;
    cin>>n;

    primecheck(n);

    int ans=n;
    for(auto[x,y]:mp){
         ans = ans / x * (x - 1);
    }

    cout<< ans <<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}