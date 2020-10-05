#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;
// typedef modint998244353 mint;

int main() {
    
    ll N, Q;
    cin >> N >> Q;
    string S(N,'1');
    vector<char>  D(Q);
    vector<ll> L(Q), R(Q);
    for (ll i=0; i<Q; i++) cin >> L[i] >> R[i] >> D[i];
    for (ll i=0; i<Q; i++) {
        for (ll j=L[i]-1; j<=R[i-1]; j++) {
            S[j] = D[i];
        }
        ll ans = stoi(S);
    }
}