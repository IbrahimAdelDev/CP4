#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int l;
    while(1)
    {
        cin >> l;
        char c='+';
        char d = 'x';
        if(l == 0) break;
        l--;
        while(l--){
            string s;
            cin >> s;
            if(d == 'x'){
                if(s[1]=='y'){
                    if(c=='+'){
                        if(s[0]=='+') c = '+';
                        else if(s[0]=='-') c = '-';
                    }
                    else if(c=='-'){
                        if(s[0]=='+') c = '-';
                        else if(s[0]=='-') c = '+';
                    }
                    d = 'y';
                }
                else if(s[1]=='z'){
                    if(c=='+'){
                        if(s[0]=='+') c = '+';
                        else if(s[0]=='-') c = '-';
                    }
                    else if(c=='-'){
                        if(s[0]=='+') c = '-';
                        else if(s[0]=='-') c = '+';
                    }
                    d = 'z';
                }
            }
            else if(d == 'y'){
                if(s[1]=='y'){
                    if(c=='+'){
                        if(s[0]=='+') c = '-';
                        else if(s[0]=='-') c = '+';
                    }
                    else if(c=='-'){
                        if(s[0]=='+') c = '+';
                        else if(s[0]=='-') c = '-';
                    }
                    d = 'x';
                }
            }
            else if(d == 'z'){
                if(s[1]=='z'){
                    if(c=='+'){
                        if(s[0]=='+') c = '-';
                        else if(s[0]=='-') c = '+';
                    }
                    else if(c=='-'){
                        if(s[0]=='+') c = '+';
                        else if(s[0]=='-') c = '-';
                    }
                    d = 'x';
                }
            }

        }
        cout<<c<<d<<'\n';
    }
}

int main(){
    solve();
    return 0;
}
