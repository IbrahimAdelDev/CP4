#include <iostream>
#include <math.h>
// #include <string>

// using namespace std;

void solve(){
    int t, i=1;
    scanf("%d", &t);
    while(i<=t){
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);
        p=p%n;
        if(p+k>n){
            p-=(n-k)+1;
            k=1;
        }
        printf("Case %d: %d\n", i, p+k);
        i++;
    }
}

int main(){
    solve();
    return 0;
}
