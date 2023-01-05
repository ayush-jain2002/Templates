#include<bits/stdc++.h>
using namespace std;
#define pi pair<ll,ll>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
const int mod=1000000007;
int bit[1000]={0},arr[1000]={0},n;
void update(int i,int x){

   for(;i<=n;i+=i&-i)
      bit[i]+=x;
     
   
}
int query(int x){
   int sum=0;
   for(;x>0;x-=x&-x)
      sum+=bit[x];
      return sum;
   
}

int main(){
   cin>>n;
   for(int i=1;i<=n;i++){
      cin>>arr[i];
      update(i,arr[i]);
   }
   cout<<query(6)-query(2)<<endl;
   update(2,10);
   cout<<query(6)-query(1);
   
}
