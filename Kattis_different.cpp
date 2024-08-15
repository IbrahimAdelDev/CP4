#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    while(true){                                   //while(scanf("%lld %lld", &a, &b)!=EOF || == 2)
        long long a, b;
        scanf("%lld %lld", &a, &b);                //نلغي دا
        if(feof(stdin))break;                      //نلغي دا
        printf("%lld\n", (a - b > 0) ? a-b : b-a); //abs(a-b);
    }
}

int main(){
    solve();
    return 0;
}

/* //another solution
#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    long long a, b;
    while(scanf("%lld %lld", &a, &b)!=EOF){  // scanf == 2
        printf("%lld\n", abs(a-b));
    }
}

int main(){
    solve();
    return 0;
}

*/
