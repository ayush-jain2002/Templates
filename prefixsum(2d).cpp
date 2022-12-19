#include<bits/stdc++.h>
using namespace std;

int main(){ 
  int n,m;
  cin>>n>>m;
  vector<vector<int>>arr(n,vector<int>(m,0));
   vector<vector<int>>prefix(n,vector<int>(m,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<m;i++){
          prefix[0][i]=arr[0][i];
          if(i>0) prefix[0][i]+=prefix[0][i-1];
  }
  for(int i=0;i<n;i++){
    prefix[i][0]=arr[i][0];
          if(i>0) prefix[i][0]+=prefix[i-1][0];
  }
  for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
      prefix[i][j]+=arr[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
    }
  }
  for(auto i:prefix){
    for(auto j:i){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  
}