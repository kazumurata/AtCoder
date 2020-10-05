#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> P(N);
    for (ll i=0; i<N; i++) cin >> P[i];
    ll m = P[0];
    ll ans = 1;
    for (ll i=1; i<N; i++) {
        if (m>=P[i]) ans++;
        m = min(m,P[i]);
    }
    cout << ans << endl;
}