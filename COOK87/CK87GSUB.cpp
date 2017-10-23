#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
ll trivial(string s){
  ll ans = 0;
  for(int i=0; i<s.size(); i++){
      for(int j=i+1; j<s.size(); j++){
        if(j==i+1 && s[i]==s[j]){
          ans++;
        }
        else if(s[i]==s[j]){
          ans++;
          if(s[j-1]!=s[i]) break;
        }
        else if(s[j]!=s[i+1]) break;
      }
    }
  return ans;
}
 
string rand_string(){
  int n = rand()%100000;
  string s;
  for(int i=0; i<n; i++){
    s = s + (char)('a'+rand()%3);
  }
  return s;
}
 
int main(){
  int t;
  ll ans; long long x; cin >> t;
  string s;
  int i, tmp;
  while(t--){
    cin >> s;
    ans = 0;
    i = 0;
    while(i<s.size()){
      tmp = i;
      while(i<s.size()-1 && s[i+1]==s[i]) i++;
      if(i!=tmp){
        x = (ll)(i-tmp+1);
        ans = ans + x*(x-1)/2;
      }
      else{
        i++;
        while(i<s.size()-1 && s[i]==s[i+1]) i++;
        if(i<s.size()-1 && s[i+1]==s[tmp]){
          ans++;
        }
        i = tmp+1;
      }
    }
    cout << ans << endl;
  }
  return 0;
} 
