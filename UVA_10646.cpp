#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int n, m=0;
    cin>>n;
    while(n--)
    {
        m++;
        vector<string> a(27);
        vector<string> b(25);
        for(int i=0; i<27; i++){
            cin>>a[i];
        }
        for(int i=0; i<25; i++){
            cin>>b[i];
        }
        int y=0, x, coun=3, i;
        for(i=26 ; i>=0 && coun>0; i--){
            if(a[i][0]>='2' && a[i][0]<='9'){
                x=a[i][0]-'0';
            }
            else{
                x=10;
            }
            y+=x;
            i-=10-x;
            coun--;
        }
        y-=i;
        y--;
        cout<<"Case "<<m<<": "<<b[y-1]<<endl;
    }
}

int main(){
    solve();
    return 0;
}
