#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", (n/3)*(m/3));
    }
}

int main(){
    solve();
    return 0;
}
