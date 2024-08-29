#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int, int> m;
    for(int i=1; i<n; i++){
        int a;
        cin>>a;
        m[a]=i+1;
    }
    cout<<1<<" ";
    for(int i=0; i<n-1; i++){
        cout<<m[i]<<" ";
    }
}

int main(){
    solve();
    return 0;
}
