#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t; cin >> t;
  long n, k, e;
  vector<long> p;
  for(int z=0; z<t; z++){
    cin >> n >> k;
    p = vector<long>(n);
    e = 0;
    for(long i=0; i<n; i++){
      cin >> p[i];
    }
    sort(p.begin(), p.end());
    for(long i=0; i<n; i++){
      if(p[i]<e) continue;
      if(p[i]==e) e++;
      else if(k>0) {
        k--; e++; i--;
      }
      else break;
    }
    cout << e+k << endl;
  }
  return 0;
} 
