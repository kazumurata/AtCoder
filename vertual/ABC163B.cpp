#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, M;
    cin >> N >> M;
    ll a, A = 0;
    for (ll i=0; i<M; i++) {
        cin >> a;
        A += a;
    }
    ll ans = N - A;
    if (ans < 0) ans = -1;
    cout << ans << endl;
}