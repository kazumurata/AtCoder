#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll mod = pow(10,9) + 7;
    ll N, K;
    cin >> N >> K;
    ll ans = 0;
    for (ll i=K; i<=N+1; i++) {
        ans += (((2*N-i+1)*i/2)%mod - i*(i-1)/2%mod + 1) % mod;
        if (ans>=mod) ans %= mod;
        if (ans<0) ans += mod;
    }
    if (ans<0) ans += mod;
    cout << ans << endl;
}