void Divisors(int n){
     
    set<int>st;

    for(int i=1;i*i<=n;i++){
       if(n%i==0){
           int x=i;
           int y=n/i;
           st.insert(x);
           st.insert(y);
       }
    }
}