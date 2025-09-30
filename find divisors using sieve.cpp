#include<bits/stdc++.h>
#define mod 1000000007
#define int long long int
using namespace std;
const int N = 1e5+10;
vector<vector<int>>divisor(N);

void sieve(){
     
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            divisor[j].push_back(i);
        }
    }

}


void solve(){
     int n;
     cin>>n;

     vector<int>v(n);
     for(int i=0;i<n;i++)cin>>v[i];

     for(int it:v){
          cout<< it <<"-> ";
          for(int a:divisor[it]){
              cout<< a <<" ";
          }
          cout<<endl;
     }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    
    solve();
    
    return 0;
}