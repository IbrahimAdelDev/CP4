#include <iostream>
#include <math.h>
// #include <string>

// using namespace std;

void solve(){
    int t;
    scanf("%d", &t);
    while(t--){
        unsigned long long n;
        scanf("%llu", &n);
        n*=(8);
        long long ans = (sqrt(1+n)-1)/2;
        printf("%lld\n", ans);
    }
}

int main(){
    solve();
    return 0;
}
