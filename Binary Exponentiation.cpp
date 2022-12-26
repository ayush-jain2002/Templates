  const int mod=1000000007;
int binexp(int a,int b){
      int result=1;
      while(b>0){
          if(b&1){
              result=(result*1LL*a)%mod;
          }
        a=(a*1LL*a)%mod;
          b>>=1;
      }
      return result;
  }
