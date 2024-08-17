#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
#include <string>
// #include <vector>

// using namespace std;

void solve(){
    char a[3];
    std::string c = "OCT", d = "DEC";
    int b;
    scanf("%s %d", a, &b);
    (a == c && b == 31) || (a == d && b == 25) ? printf("yup\n") : printf("nope\n"); // مش مهم نحول استرنج من c الي c++ أو العكس إلا لو هنطبع بنطبع كل نوع علي حسب لغته
}

int main(){
    solve();
    return 0;
}
