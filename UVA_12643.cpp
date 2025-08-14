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
  int n, j;
  while(scanf("%d %d %d", &n, &i, &j) != EOF) {
    int ans=0;
    while(i != j) {
      ans++;
      i=(i+1)/2;
      j=(j+1)/2;
    }
    cout<<ans<<el;
  }
}

int main() {
  fb();
  int t, i=0;
  t=1;
  // cin >> t;
  while(i<t) {
    solve(++i, t);
  }
  return 0;
}
