#include <iostream>
// #include <cstdio>
// #include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int a, b, c, d;
    while(1){
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a == 0 && b == 0 && c == 0 && d == 0) break;
        if(a+b == 3){
            if(c+d == 3)cout<<"Tie.\n";
            else cout<<"Player 1 wins.\n";
        }
        else if(a == b){
            if(c+d == 3)cout<<"Player 2 wins.\n";
            else if(c == d){
                if(a > c)cout<<"Player 1 wins.\n";
                else if(a < c)cout<<"Player 2 wins.\n";
                else cout<<"Tie.\n";
            }
            else cout<<"Player 1 wins.\n";
        }
        else{
            if(c+d == 3)cout<<"Player 2 wins.\n";
            else if(c == d)cout<<"Player 2 wins.\n";
            else {
                int count1 = 0, count2 = 0;
                count1 = max(a, b)*10 + min(a, b);
                count2 = max(c, d)*10 + min(c, d);
                if(count1 > count2)cout<<"Player 1 wins.\n";
                else if(count1 < count2)cout<<"Player 2 wins.\n";
                else cout<<"Tie.\n";
            }
        }
    }
}

int main(){
    solve();
    return 0;
}
