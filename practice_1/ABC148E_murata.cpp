#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    if (N%2!=0) {
        cout << 0 << endl;
        exit(0);
    }
    ll count = 0;
    ll n = N/2;
    ll j=0;
    for (ll i=1; pow(5,i)<=n; i++) {
        ll mod = pow(5,i);
        count += n/mod;
        j++;
    }
    cout << count << endl;
    // cout << j << endl;
}