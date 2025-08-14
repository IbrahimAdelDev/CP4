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
  string s;
  cin>>s;
  int h=0;
  ll ans=0;
  map<int, int>pos;
  pos[h]=1;
  s='0'+s;
  for(int i=1 ; i<s.size() ; i++) {
    if(s[i]=='/') {
      h++;
      if(pos[h]!=0) {
        ans+=i-pos[h];
        pos[h]=i+1;
      }
      else {
        pos[h]=i+1;
      }
    } else if (s[i]=='\\') {
      h--;
      pos[h]=i+1;
    } else {
      pos[h]=i+1;
    }
  }
  cout<<ans<<"\n";
}

int main() {
  fb();
  int t, i=0;
  t=1;
  cin >> t;
  while(i<t) {
    solve(i, t);
    i++;
  }
  return 0;
}
