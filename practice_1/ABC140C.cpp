#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> B(N-1);
    for (ll i=0; i<N-1; i++) cin >> B[i];
    reverse(B.begin(),B.end());
    ll ans = B[0] + B[N-2];
    for (ll i=1; i<N-1; i++) ans += min(B[i],B[i-1]);
    cout << ans << endl;
}