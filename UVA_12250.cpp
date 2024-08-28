// #include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    string s;
    int i=0;
    map<string, string> m={{"HELLO", "ENGLISH"}, {"HOLA", "SPANISH"}, {"HALLO", "GERMAN"}, {"BONJOUR", "FRENCH"}, {"CIAO", "ITALIAN"}, {"ZDRAVSTVUJTE", "RUSSIAN"}};
    while(cin>>s){
        if(s=="#") break;
        if(m[s] != "")printf("Case %d: %s\n", ++i, m[s].c_str());
        else printf("Case %d: UNKNOWN\n", ++i);
    }
}

int main(){
    solve();
    return 0;
}

/* ////////////////////////////////////////////////////////////////////////////////USING `C` STRING => CHAR[]
// #include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    char s[14];
    char ss[] = "UNKNOWN";
    int i=0;
    map<string, string> m={{"HELLO", "ENGLISH"}, {"HOLA", "SPANISH"}, {"HALLO", "GERMAN"}, {"BONJOUR", "FRENCH"}, {"CIAO", "ITALIAN"}, {"ZDRAVSTVUJTE", "RUSSIAN"}};
    while(scanf("%s", s)){
        if(s[0]=='#') break;
        printf("Case %d: %s\n", ++i, (m[s] != "") ? m[s].c_str() : ss);
    }
}

int main(){
    solve();
    return 0;
}
*/
