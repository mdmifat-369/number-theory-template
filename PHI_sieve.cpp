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
const int N = 2e5+10;
//template<typename T> using pbds= tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
vector<int>phi(N+1);

void phi_sieve(){
     
    for(int i=0;i<=N;i++)phi[i]=i;

    for(int i=2;i<=N;i++){
        if(phi[i]==i){
            for(int j=i;j<=N;j+=i){
                phi[j]-=phi[j]/i;
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<< i <<"= "<<phi[i]<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    phi_sieve();

    solve();
    
    return 0;
}