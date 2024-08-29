#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int t;
    cin >> t;
    while(t--){
        int n, mx = -100000, ans=-1;
        cin >> n;
        while(n--){
            int x;
            cin >> x;
            ans = max(ans, mx-x);
            mx = max(mx, x);
        }
        cout << ans << '\n';
    }
        
}

int main(){
    solve();
    return 0;
}
