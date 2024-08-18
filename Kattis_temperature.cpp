#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
#include <string>                                                    //sad :(
// #include <vector>

// using namespace std;

void solve(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    if(b == 1 && a == 0)printf("ALL GOOD");
    else if (b == 1)printf("IMPOSSIBLE");
    else if (b != 1)printf("%0.6lf", a/double(1-b));
}
int main(){
    solve();
    return 0;
}
