#include<bits/stdc++.h>
using namespace std;

vector<int>prefix_function(string s){
  int n=s.size();
  vector<int>p(n,0);
  for(int i=1;i<n;i++){
    int j=p[i-1];
    while(j>0 && s[i]!=s[j]) j=p[j-1];
    if(s[i]==s[j]) j++;
    p[i]=j;
  }
  return p;
}
Optimized algo for z
// void z(string s) {
//     int n = s.size();
//     vector<int> z(n,0);
//     int x = 0, y = 0;
//     for (int i = 1; i < n; i++) {
//         z[i] = max(0,min(z[i-x], y-i+1));
//         while (i+z[i] < n && s[z[i]] == s[i+z[i]]) {
//             x = i; y = i + z[i]; z[i]++;
//         }
//         if (z[i] + i == n) cout<<i<<' ';
//     }
//     cout<<n;
// }
int main(){ 
  string s="abccccccabcd";
 
  string t="ca";
   vector<int>p=prefix_function(t);
  int pos=-1;
  int i(0),j(0);
  while(i<s.size()){
    if(s[i]==t[j]) i++,j++;
    else{
      if(j!=0) j=p[j-1];
      else i++;
    }
    if(j==t.size()) pos=i-t.size();
  }
  cout<<pos;
}
