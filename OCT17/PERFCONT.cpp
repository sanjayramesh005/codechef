#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t, n, easy, hard, tmp;
  long P;
  cin >> t;
  for(int z=0; z<t; z++){
    cin >> n >> P;
    easy = 0; hard = 0;
    for(int i=0; i<n; i++){
      cin >> tmp;
      if(P/10>=tmp) hard++;
      else if(P/2<=tmp) easy++;
    }
    if(hard==2 && easy==1) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
} 
