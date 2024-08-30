#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    string s;
    cin>>s;
    for(int i=1; i<s.length(); i++){
        if(s[i] == 's' && s[i-1] == 's'){
            cout<<"hiss";
            return;
        }
    }
    cout<<"no hiss";
}

int main(){
    solve();
    return 0;
}
