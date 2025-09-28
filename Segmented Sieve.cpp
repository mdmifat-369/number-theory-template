#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+10;

vector<int>primeNum(N,0);
vector<int>v;

void sieve(){
    primeNum[1]=1;
    for(int i=2;i*i<=N;i++){
        if(primeNum[i]==0){
            for(int j=i*i;j<=N;j+=i){
                primeNum[j]=1;
            }
        }
    }

    for(int i=2;i<=N;i++){
        if(primeNum[i]==0){
            v.push_back(i);
        }
    }
}

int segment_sieve(int L,int R){
    if(L==1)L++;
    int mx=R-L+1;
    int ara[mx+1];
    memset(ara,0,sizeof(ara));

    for(int p:v){
        if(p*p<=R){
            int i=(L/p)*p;
            if(i<L)i+=p;

            for(;i<=R;i+=p){
                if(i!=p){
                    ara[i-L]=1;
                }
            }
        }
    }

    int cnt=0;
    for(int i=0;i<mx;i++){
        if(ara[i]==0){
            cout<< i+L <<" ";
            cnt++;
        }
    }
    cout<<endl;

    return cnt;
}

void solve(){
    int L,R;
    cin>>L>>R;

    cout<< segment_sieve(L,R) <<endl;
}

int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      
      sieve();

      int t;
      cin>>t;

      while(t--){
        solve();
      }
}