#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
const int N=1e6;
int fact[N];
int insfact[N];

int binExp(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int inverse(int a){
   return binExp(a,mod-2);
}

void precompute_fact(){
    fact[0]=1;
    for(int i=1;i<=N;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }

    for(int i=0;i<=N;i++){
        insfact[i]=inverse(fact[i]);
    }
}

void solve(){
    int n,r;
    cin>>n>>r;

        if(r<0 || r>n){
        cout<<0<<"\n";
        return;
    }

    cout<< (fact[n]*insfact[r]%mod*insfact[n-r]%mod)%mod <<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute_fact();
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
