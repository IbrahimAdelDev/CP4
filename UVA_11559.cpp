#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    long long p, b, h, w;
    while(cin>>p>>b>>h>>w)
    {
        long long minCost = 2e9;
        while(h--){
            long long hp;
            cin>>hp;
            int i=0;
            while(i<w){
                int v;
                cin>>v;
                if(v>=p && hp*p<=b){
                    minCost = min(minCost, p*hp);
                }
                i++;
            }
        }
        (minCost==2e9) ? cout<<"stay home\n" : cout<<minCost<<"\n";
    }
}

int main(){
    solve();
    return 0;
}
