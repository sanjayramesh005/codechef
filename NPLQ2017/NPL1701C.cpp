#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void sieve(vector<int> &p){
  //p[2] = -1;
  for(int i=2; i<sqrt(p.size()+2)+2; i++){
    if(p[i]==-1){
      for(int j=i; j<(int)p.size(); j+=i) 
        if(p[j]==-1){
          p[j] = i;
        }
    }
  }
}
 
ll num_factors(ll n, vector<int> &p){
  if(n==1) return 1;
  ll ans = 0;
  while(n!=1){
    if(p[n]==-1) p[n]=n;
    n = n/p[n]; ans++;
  }
  return ans;
}
 
int main(){
  ll t, n, tmp, tmp1; cin >> t;
  vector<int> p(2000001, -1);
  sieve(p);
  while(t--){
    cin >> n; 
    tmp1 = 0;
    for(int i=0; i<n; i++){
      cin >> tmp;
      tmp1+=num_factors(tmp, p);
    }
    tmp1 = tmp1-n;
    if(tmp1%2==0) cout << "Friend" << endl;
    else cout << "Appu" << endl;
  }
  return 0;
}
 
