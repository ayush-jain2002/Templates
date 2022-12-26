  const int mod=1000000007;

// case 1- a<=1e9 b<=1e9
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


//case 2- a<=1e18 b<=1e9 mod=1e9+7
int binexp(long long  a,int b){
       a%=mod;
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


//case 3- a<=1e9 b<=1e9 mod=1e18+7
int binexp(long long  a,long long b){
       a%=mod;
      int result=1;
      while(b>0){
          if(b&1){
              result=binmultiply(result,a);
          }
        a=binmultiply(a,a);
          b>>=1;
      }
      return result;
  }
int binmultiply(long long  a,long long b){
         int result=0;
      while(b>0){
          if(b&1){
              result=(result+a)%mod;
          }
        a=(a+a)%mod;
          b>>=1;
      }
      return result;
  }

//case 3- a<=1e9 b>1e18(high power represented as b^c) mod=1e18+7
// (a)^(b^c)
// a^b=a^(b%phi(m)) where phi is Euler totient function(ETF) of m
// for prime numbers etf(mod)=mod-1

int binexp(int a,int b,int m){
      int result=1;
      while(b>0){
          if(b&1){
              result=(result*1LL*a)%m;
          }
        a=(a*1LL*a)%m;
          b>>=1;
      }
      return result;
  }

int main(){
  //50^(64^32)
  cout<<binexp(50,binexp(64,32,mod-1));
}
