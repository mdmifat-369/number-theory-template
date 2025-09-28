#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
const int N=1000;
int fact[N];
int insfact[N];

int binExp(int base, int POW) {
    int res=1;
    while(POW>0){
        if(POW%2==1){
            POW--;
            res=(res*base)%mod;
        }else{
            POW/=2;
            base=(base*base)%mod;
        }
    }

    return res%mod;
}

void precompute(){
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }

    insfact[N-1]=binExp(fact[N-1],mod-2);
    for(int i=N-2;i>=0;i--){
        insfact[i]=(insfact[i+1]*(i+1))%mod;
    }
}

void solve(){
    int n,r;
    cin>>n>>r;

      if(r<0 || r>n){
        cout<<0<<"\n";
        return;
    }

    cout<< (fact[n]*insfact[r]%mod*insfact[n-r]%mod)%mod;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}