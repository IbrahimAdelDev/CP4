// #include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int i=0, n;
    while(scanf("%d", &n) != EOF){
        int mn = INT_MAX, mx = INT_MIN;
        while(n--){
            int a;
            scanf("%d", &a);
            mn = min(mn, a);
            mx = max(mx, a);
        }
        printf("Case %d: %d %d %d\n", ++i, mn, mx, mx-mn);
    }
}

int main(){
    solve();
    return 0;
}
