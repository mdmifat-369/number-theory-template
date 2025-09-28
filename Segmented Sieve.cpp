/*
                In the name of Allah, The Most Gracious and The Most Merciful.
           Glory be to You(Allah)! We have no knowledge except what You have taught us.
                         It is you who are the Knowledgeable, the Wise.
           ***************************************************************************/

#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define int long long int
using namespace std;
//using namespace __gnu_pbds;
const int N = 1e6+10;
//template<typename T> using pbds= tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
     int ara[mx];
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
            cnt++;
            cout<< L+i <<" ";
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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}