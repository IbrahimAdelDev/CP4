#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int b, n;
    while(1)
    {
        cin>>b>>n;
        if(b==0 && n==0) break;
        vector<int> v(b+1);
        for(int i=1; i<=b; i++){
            cin>>v[i];
        }
        for(int i=0; i<n; i++){
            int x, y, z;
            cin>>x>>y>>z;
            v[x] -= z;
            v[y] += z;
        }
        bool f = 1;
        for(int i=1; i<=b; i++){
            if(v[i]<0){
                cout<<"N\n";
                f = 0;
                break;
            }
        }
        if(f) cout<<"S\n";
    }
}

int main(){
    solve();
    return 0;
}
