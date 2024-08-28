// #include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int i=0, n, m;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &m);
        int z, b=0, c=0;
        m--;
        scanf("%d", &z);
        while(m--){
            int a;
            scanf("%d", &a);
            if(z-a < 0) b++;
            else if(z-a > 0) c++;
            z = a;
        }
        printf("Case %d: %d %d\n", ++i, b, c);
    }
}

int main(){
    solve();
    return 0;
}
