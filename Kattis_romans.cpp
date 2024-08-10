#include <iostream>
#include <math.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    double a;
    scanf("%lf", &a);
    a *= 5280000;
    a = round(a/(double)4854);
    // std::cout<<a;
    printf("%.0lf", a);
}

int main(){
    solve();
    return 0;
}
