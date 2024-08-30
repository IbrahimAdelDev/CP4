#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int t;
    cin>>t;
    vector<int> tea(t);
    for(int i=0; i<t; i++){
        cin>>tea[i];
    }
    int n;
    cin>>n;
    vector<int> flav(n);
    for(int i=0; i<n; i++){
        cin>>flav[i];
    }
    int w=0, mnp=INT_MAX;
    while(w<t){
        int m;
        cin>>m;
        for(int i=0; i<m; i++){
            int x;
            cin>>x;
            mnp = min(mnp, tea[w]+flav[x-1]);
        }
        w++;
    }
    int money;
    cin>>money;
    // cout<<money/mnp << " " << mnp << endl;
    int ans = money/mnp;
    cout<<((ans>0) ? ans-1 : 0);
}

int main(){
    solve();
    return 0;
}
