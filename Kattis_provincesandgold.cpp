#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
#include <string>
// #include <vector>

// using namespace std;

void solve(){
    long long a, b, c, sum=0;
    scanf("%lld %lld %lld", &a, &b, &c);
    sum+=a*3+b*2+c;
    if(sum>=8) printf("Province or ");
    else if(sum>=5) printf("Duchy or ");
    else if(sum>=2) printf("Estate or ");
    if(sum>=6) printf("Gold");
    else if (sum>=3) printf("Silver");
    else if (sum>=0) printf("Copper");
    }

int main(){
    solve();
    return 0;
}
