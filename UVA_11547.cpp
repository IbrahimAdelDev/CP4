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
        long long n;
        scanf("%ld", &n);
        printf("%d\n", abs(n*315+36962)%100/10);
    }
}

int main(){
    solve();
    return 0;
}
