#include <iostream>
#include <math.h>
// #include <string>

// using namespace std;

void solve(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        printf("%lld %s", n, (abs(n) % 2 == 0) ? "is even\n" : "is odd\n");
    }
}

int main(){
    solve();
    return 0;
}
