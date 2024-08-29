#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    string s, t;
    while(getline(cin, s)){
        getline(cin, t);
        double a=0, b=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z')a += tolower(s[i]) - 'a' + 1;
        }
        for (int i = 0; i < t.size(); i++)
        {
            if(tolower(t[i]) >= 'a' && tolower(t[i]) <= 'z')b += tolower(t[i]) - 'a' + 1;
        }
        a = (int(a)%9) ? int(a)%9 : 9;
        b = (int(b)%9) ? int(b)%9 : 9;
        printf("%.2f %%\n", min(a/b, b/a) * double(100));
    }
}

int main(){
    solve();
    return 0;
}
