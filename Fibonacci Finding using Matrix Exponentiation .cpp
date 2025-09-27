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


int res[5][5],M[5][5];

void multiply(int A[5][5], int B[5][5], int C[5][5]) {
    int temp[2][2];
    memset(temp, 0, sizeof(temp));

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp[i][j]=0;
            for(int k=0;k<2;k++){
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            C[i][j] = temp[i][j];
        }
    }

}


void solve(){
    int n;
    cin>>n;

    M[0][0]=0;
    M[0][1]=1;
    M[1][0]=1;
    M[1][1]=1;

    res[0][0]=1;
    res[0][1]=0;
    res[1][0]=0;
    res[1][1]=1;

    if(n==1){
        cout<< 0 <<endl;
        return;
    }
    if(n==2){
        cout<< 1 <<endl;
        return;
    }

    int POW=n-1;
    while(POW>0){
        if(POW%2==1){
            POW--;
            multiply(res,M,res);
        }else{
            POW/=2;
            multiply(M,M,M);
        }
    }

    cout<< res[1][1] <<endl;

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