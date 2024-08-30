#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n, pos=0;
        cin>>n;
        // cin.ignore();
        string s;
        vector<string> v;
        while(n--){
            // getline(cin, s);
            cin>>s;
            if(s=="LEFT"){
                pos--;
                v.push_back(s);
            }
            else if(s=="RIGHT"){
                pos++;
                v.push_back(s);
            }
            else{
                // cout<<v[s[s.size()-1]-'0'-1]<<endl;
                cin>>s;
                int x;
                cin>>x;
                x--;
                v.push_back(v[x]);
                if(v[x]=="LEFT")pos--;
                else if(v[x]=="RIGHT")pos++;
            }
            // cout<<pos<< "    " << n << '\n';
        }
        cout<<pos<<endl;
    }
}

int main(){
    solve();
    return 0;
}
