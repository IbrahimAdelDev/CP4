// #include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int i=0, n;
    scanf("%d", &n);
    while(n--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: %s\n", ++i, (a<=20 && b<= 20 && c<= 20) ? "good": "bad");
    }
}

int main(){
    solve();
    return 0;
}
