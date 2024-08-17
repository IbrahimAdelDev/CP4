#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    double n, a, b, ans=0;
    scanf("%lf", &n);
    while(n--){
        scanf("%lf %lf", &a, &b);
        ans += a*b;
    }
    printf("%0.3lf\n", ans);
}

int main(){
    solve();
    return 0;
}
