#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main(){
  ll t; cin >> t;
  ll n, ans;
  vector<ll> v;
  while(t--){
    cin >> n;
    v = vector<ll>(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    ans = 0;
    for(ll i=1; i<n-1; i++){
      if(v[i]<v[i-1] && v[i]<v[i+1]) ans++;
    }
    cout << ans << endl;
  }
  return 0;
} 
