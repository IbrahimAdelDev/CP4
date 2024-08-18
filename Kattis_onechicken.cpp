#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
#include <string>
// #include <vector>

// using namespace std;

void solve(){
    long long a, b;
    scanf("%lld %lld", &a, &b);
    (a > b) ? printf("Dr. Chaz needs %lld more piece%s of chicken!", abs(a-b), (abs(a-b) != 1) ? "s" : "") : printf("Dr. Chaz will have %lld piece%s of chicken left over!", abs(a-b), (abs(a-b) != 1) ? "s" : "");
}

int main(){
    solve();
    return 0;
}
