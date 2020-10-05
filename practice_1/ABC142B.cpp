#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> h(N);
    for (ll i=0; i<N; i++) cin >> h[i];
    ll ans = 0;
    for (ll i=0; i<N; i++) if (h[i]>=K) ans++;
    cout << ans << endl;
}