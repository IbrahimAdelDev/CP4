#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0) break;
        n %= 9;
        n = (n) ? n : 9;
        cout << n << '\n';
    }    
}

int main(){
    solve();
    return 0;
}
