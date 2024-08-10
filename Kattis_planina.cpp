#include <iostream>
// #include <math.h>
#include <string>
#include <vector>

// using namespace std;

void solve(){
    long long n, square = 1, ans=4, p;
    scanf("%lld", &n);
    while(n--){
        for(int i=1; i<=square; i++){
            (i==1) ? p=5 : p=4;
            ans += (p+((p-1)*(square-1)));
        }
        square = square << 1;
    }
    printf("%lld\n", ans);
}

int main(){
    solve();
    return 0;
}
