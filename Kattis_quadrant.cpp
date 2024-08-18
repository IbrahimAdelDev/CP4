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
    if(a>0 && b>0)printf("1");
    else if(a>0 && b<0)printf("4");
    else if(a<0 && b>0)printf("2");
    else if(a<0 && b<0)printf("3");
    }

int main(){
    solve();
    return 0;
}
