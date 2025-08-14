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
  int n;
  cin>>n;
  float a;
  ll ans, sum1=0, sum2=0;
  string s;
  for(int k = 0; k<n ; k++) {
    cin>>a;
    a++;
    sum1 += ceil(a/30.0);
    sum2 += ceil(a/60.0);
  }
  sum1*=10;
  sum2*=15;
  ans=sum1;
  s="Mile Juice";
  if(sum1<sum2){
    s="Mile";
  } else if(sum1>sum2) {
    ans=sum2;
    s="Juice";
  }
  printf("Case %d: %s %d\n", i, s.c_str(), ans);
}

int main() {
  fb();
  int t, i=0;
  t=1;
  cin >> t;
  while(i<t) {
    solve(++i, t);
  }
  return 0;
}
