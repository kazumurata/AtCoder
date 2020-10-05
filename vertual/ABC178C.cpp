#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    ll mod = pow(10,9)+7;

    ll ans1 = 1; // 全部
    for (ll i=0; i<N; i++) {
        ans1 *= 10;
        if (ans1 >= mod) ans1 %= mod;
    }

    ll ans7 = 1; // 0も9もない
    for (ll i=0; i<N; i++) {
        ans7 *= 8;
        if (ans7 >= mod) ans7 %= mod;
    }

    ll ans2 = ans1 - ans7; // 0か9はある
    if (ans2>mod) ans2 %= mod;
    if (ans2<0) ans2 += mod;

    ll ans0 = 1; // 0はあるけど9はない
    for (ll i=0; i<N; i++) {
        ans0 *= 9;
        if (ans0 >= mod) ans0 %= mod;
    }
    ans0 -= ans7;
    if (ans0 > mod) ans0 %= mod;
    if (ans0 < 0) ans0 += mod;

    ll ans9 = ans0; // 9はあるけど0はない

    ll ans = ((ans2) - ((ans0 + ans9)%mod)) % mod;
    if (ans<0) ans += mod;

    cout << ans << endl;
}