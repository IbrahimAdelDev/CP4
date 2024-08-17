#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    long long x, n, p, ans=0;
    scanf("%lld\n%lld", &x, &n);
    while(n--){
        scanf("%lld", &p);
        ans += x;
        ans -= p;
    }
    printf("%lld\n", ans+x);
}

int main(){
    solve();
    return 0;
}
