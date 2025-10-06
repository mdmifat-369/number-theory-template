/*
                In the name of Allah, The Most Gracious and The Most Merciful.
           Glory be to You(Allah)! We have no knowledge except what You have taught us.
                         It is you who are the Knowledgeable, the Wise.
           ***************************************************************************/

#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
// #define mod 1000000007
#define int long long int
using namespace std;
//using namespace __gnu_pbds;
const int N = 2e5+10;
//template<typename T> using pbds= tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int MULMOD(int a, int b, int mod) {
    int res = 0;
    while (b > 0) {
        if (b & 1) res = (res + a) % mod;
        a = ( a + a) % mod;
        b >>= 1;
    }
    return res;
}

void solve(){
    int m=(int)1e18+7;
    int x=1e18,y=1e18;

    cout<< MULMOD(x,y,m) <<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while(t--)

    solve();
    
    return 0;
}