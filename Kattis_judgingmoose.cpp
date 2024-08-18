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
    if(a==0 && b==0){
        printf("Not a moose");
        return;
    }
    printf("%s %lld", a==b?"Even":"Odd", std::max(a, b)*2);
}

int main(){
    solve();
    return 0;
}
