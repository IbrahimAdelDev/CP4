#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    string s;
    int a=0, n;
    cin>>n;
    while(n--)
    {
        long long ans=0;
        a=0;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='O')
            {
                a++;
                ans+=a;
            }
            else
            {
                a=0;
            }
        }
        cout<<ans<<'\n';
    }
}

int main(){
    solve();
    return 0;
}
