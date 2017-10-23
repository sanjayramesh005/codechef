#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int r, g, b; cin >> r >> g >> b;
  cout << min(r, min(g, b)) << endl;
  return 0;
} 
