#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    while(1){
        long long a, b;
        scanf("%lld %lld", &a, &b);
        if(feof(stdin))break;
        printf("%lld\n", abs(a-b));
    }
}

int main(){
    solve();
    return 0;
}
