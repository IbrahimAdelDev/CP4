#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define el '\n'

void fb() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve(int i, int t) {
  int a, c;
  while(cin>>a>>c) {
    if(a == 0 && c == 0) break;
    vector<int>v(c);
    int ref, ans=0;
    for(int i=0 ; i<c ; i++) {
      cin>>v[i];
      if(i==0) {
        ref=v[i];
        ans=a-v[i];
      }
      else {
        if(v[i]>v[i-1]) {
          ref=v[i];
        } else if(v[i]<v[i-1]) {
          ans+=ref-v[i];
          ref=v[i];
        }
      }
    }
    cout<<ans<<'\n';
  }
}

int main() {
  fb();
  int t, i=0;
  t=1;
  // cin >> t;
  while(i<t) {
    solve(i, t);
    i++;
  }
  return 0;
}
