#include <iostream>
// #include <cstdio>
#include <bits/stdc++.h>
// #include <math.h>
// #include <string>

using namespace std;

void solve(){
    int n, t;
    long long sum;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    switch (t)
    {
    case 1:
        cout<<7;
        break;
    case 2:
        if(a[0]>a[1]){
            cout<<"Bigger";
        }else if(a[0]==a[1]){
            cout<<"Equal";
        }else{
            cout<<"Smaller";
        }
        break;
    case 3:
        sum = a[0]+a[1]+a[2];
        cout<<sum-(min(a[0], min(a[1], a[2]))+max(a[0], max(a[1], a[2])));
        break;
    case 4:
        sum = 0;
        for(int i=0; i<n; i++){
            sum+=a[i];
        }
        cout<<sum;
        break;
    case 5:
        sum = 0;
        for(int i=0; i<n; i++){
            if(a[i]%2==0){
                sum+=a[i];
            }
        }
        cout<<sum;
        break;
    case 6:
        for(int i=0; i<n; i++){
            cout<<(char)('a'+a[i]%26);
        }
        break;
    case 7:
    {
        int z = 0;
        vector<int> v(n, 0);
        while(z<n){
            if(a[z]<0 || a[z]>=n){
                cout<<"Out";
                return;
            }
            if(a[z]==n-1){
                cout<<"Done";
                return;
            }
            if(v[z]>0){
                cout<<"Cyclic";
                return;
            }
            v[z]++;
            z = a[z];
        }
        break;
    }
    default:
        break;
    }
}

int main(){
    solve();
    return 0;
}
