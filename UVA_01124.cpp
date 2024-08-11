#include <stdio.h>
#include <iostream>
#include <math.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    char a[1000];
    while(scanf("%[a-zA-Z0-9 =]", a)!=EOF){
        printf("%s\n", a);
        if(scanf("\n")==EOF) break; // if(getchar()==EOF) break;
    }
}

int main(){
    solve();
    return 0;
}

/*
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
// #include <string>
// #include <vector>

// using namespace std;

void solve(){
    std::string a;
    while(getline(std::cin, a)){ //////////////////////////////////////with getline() لا ترجع EOF و لكن يمكن التأكد منه ب std::cin.eof()
        std::cout<<a<<'\n';
    }
}

int main(){
    solve();
    return 0;
}

*/
