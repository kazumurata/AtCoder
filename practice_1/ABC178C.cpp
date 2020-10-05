#include <bits/stdc++.h>          
using namespace std;         
typedef long long ll;      

int main() {
    ll N;
    cin >> N;
    ll mod = pow(10,9)+7;

    //
    if (N==1) {
        cout << 0 << endl;
        exit(0);
    }
    else if (N==2) {
        cout << 2 << endl;
        exit(0);
    }

    ll ans10 = 1;
    ll ans8 = 1;
    ll ans9 = 1;
    for (ll i=0; i<N; i++) {
        ans10 *= 10;
        ans10 %= mod;
    }
    if(ans10<0) {
        ans10+=mod;
    }
    for (ll i=0; i<N; i++) {
        ans9 *= 9;
        ans9 %= mod;
    }
    if(ans9<0) {
        ans9+=mod;
    }
    for (ll i=0; i<N; i++) {
        ans8 *= 8;
        ans8 %= mod;
    }
    if(ans8<0) {
        ans8+=mod;
    }

    ll ans;
    ans = ans10;
    if(ans<0) {
        ans+=mod;
    }
    ans -= ans8;
    ans %= mod;
    if(ans<0) {
        ans+=mod;
    }
    ans -= ans9-ans8;
    ans %= mod;
    if(ans<0) {
        ans+=mod;
    }
    ans -= ans9-ans8;
    ans %= mod;
    if(ans<0) {
        ans+=mod;
    }

    cout << ans << endl;
}