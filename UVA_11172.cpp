#include <iostream>
#include <math.h>
// #include <string>

// using namespace std;

void solve(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n, m;
        scanf("%lld %lld", &n, &m);
        if(n==m)printf("=\n");
        else if(n>m)printf(">\n");
        else printf("<\n");
    }
}

int main(){
    solve();
    return 0;
}
