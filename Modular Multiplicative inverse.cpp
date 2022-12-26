#include<bits/stdc++.h>
using namespace std;
  const int mod=1000000007;

//(a/b)%mod can be written as ((a%mod)*(multiplicative_inverse(b))%mod)%mod
//Modular multiplicative inverse of a number b%mod is binexp(b,mod-2)
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
  int multiplicative_inverse(int b){
    return binexp(2,mod-2);
  }
int main(){
   cout<<multiplicative_inverse(2);
}
