#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t, n, x, r; 
  cin >> t;
  for(int z=0; z<t; z++){
    cin >> n;
    x = (UINT_MAX-100000-1)/n;
    r = (UINT_MAX-100000-1)%n;
    cout << x << " ";
    for(int i=1; i<n-1; i++){
      if(r>0){
        cout << x+1 << " "; r--;
      }
      else cout << x << " ";
    }
    cout << 100000 << endl;
  }
  return 0;
} 
