#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, K, Q;
    cin >> N >> K >> Q;
    vector<ll> A(Q);
    for (ll i=0; i<Q; i++) {
        ll a;
        cin >> a;
        A[i] = a - 1;
    }
    vector<ll> j(N,K-Q);
    for (ll i=0; i<Q; i++) j[A[i]]++;
    vector<string> ans(N,"No");
    for (ll i=0; i<N; i++) if (j[i]>0) ans[i] = "Yes";

    for (ll i=0; i<N; i++) cout << ans[i] << endl;
}