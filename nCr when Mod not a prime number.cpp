#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
const int N=2005;
int C[N][N];

void  precompute_fact(){
    for(int i=0;i<N;i++){
        C[i][0]=1;
    }

    for(int i=1;i<N;i++){
        for(int j=1;j<=i;j++){
            C[i][j]=(C[i-1][j]+C[i-1][j-1])%mod;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute_fact();
    int t;
    cin>>t;

    while(t--){
        int n,r;
        cin>>n>>r;

        cout<< C[n][r] <<endl;
    }

    return 0;
}