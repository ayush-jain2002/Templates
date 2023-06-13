#include<bits/stdc++.h>
using namespace std;

int main(){ 
  int n,m;
  cin>>n>>m;
  vector<vector<int>>arr(n,vector<int>(m,0));
   vector<vector<int>>prefix(n+1,vector<int>(m+1,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      prefix[i][j]+=arr[i-1][j-1]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
    }
  }
  cout<<prefix[row2+1][col2+1]-prefix[row1][col2+1]-prefix[row2+1][col1]+prefix[row1][col1];
 
}
