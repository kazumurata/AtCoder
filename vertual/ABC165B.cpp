#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
    ld X;
    cin >> X;
    ll ans = 0;
    // ld times = 101/100;
    ll kingaku = 100;
    while (kingaku<X) {
        kingaku += kingaku/100;
        ans++;
    }
    cout << ans << endl;
}