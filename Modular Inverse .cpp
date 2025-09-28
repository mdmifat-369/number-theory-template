#include<bits/stdc++.h>
using namespace std;
#define int long long int
int a,b,mod;

int binexp(int base,int POW){
    int res=1;

    while(POW>0){
        if(POW%2==1){
            POW--;
            res=(res*base)%mod;
        }else{
            POW/=2;
            base=(base * base)%mod;
        }
    }

    return res%mod;
}

int32_t main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     cin>>a>>b>>mod;
     int x=binexp(b,mod-2);

     cout<< ((a%mod)*(x%mod))%mod <<endl;
}