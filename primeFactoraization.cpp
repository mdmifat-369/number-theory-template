
void primefac(int n){
    map<int,int>mp;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            mp[i]=cnt;
        }
    }

    if(n>1)mp[n]=1;

    for(auto[x,y]:mp){
        cout<<x<<"^"<<y<<endl;
    }
}

