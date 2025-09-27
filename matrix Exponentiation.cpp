#include<bits/stdc++.h>
using namespace std;

int res[100][100],M[100][100];
int POW,n;

void multiply(int A[100][100], int B[100][100], int C[100][100]) {
    int temp[100][100] = {0};

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            C[i][j] = temp[i][j];
        }
    }

}



void solve(){

    cin>>n>>POW;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>M[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)res[i][j]=1;
            else res[i][j]=0;
        }
    }

    while(POW>0){
        if(POW%2==1){
           POW--;
           multiply(res,M,res);
        }else{
           multiply(M,M,M);
           POW/=2;
        }
    }


       for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){

    solve();

    return 0;
}