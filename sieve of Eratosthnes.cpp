
void sieve(int n){
     vector<int>primeNum(n+1,0);

     for(int i=2;i*i<=n;i++){
        if(primeNum[i]==0){
            for(int j=i*i;j<=n;j+=i){
                primeNum[j]=1;
            }
        }
     }

     for(int i=2;i<=n;i++){
        if(primeNum[i]==0){
            cout<< i <<" ";
        }
     }
     cout<<endl;
}

