#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t; long long y, a, b, ans; cin >> t;
  while(t--){
    cin >> y; ans=0;
    for(int i=1; i<=700; i++){
      if(y-i<=0) break;
      a = (long long)floor(sqrt(y-i));
      ans+=a;
    }
    cout << ans << endl;
  }
  return 0;
} 
