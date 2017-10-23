#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t, n, k; cin >> t;
  vector<int> p;
  while(t--){
    cin >> n >>k;
    p = vector<int>(n);
    for(int i=0; i<n; i++) cin >> p[i];
    sort(p.begin(), p.end());
    cout << p[(n+k)/2] << endl;
  }
  return 0;
} 
