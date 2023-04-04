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
