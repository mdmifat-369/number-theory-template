void Binaexp(int base,int pow){
      int res=1;

      while(pow>0){
         if(pow%2==1){
            pow-=1;
            res=(res*base)%mod;
         }else{
            base=(base*base)%mod;
            pow/=2;
         }
      }

      return res;
}