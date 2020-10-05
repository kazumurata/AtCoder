#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, K, l, r;
    cin >> N >> K;
    vector<ll> L(K), R(K);
    ll mod = 998244353;
    for (ll i=0; i<K; i++) {
        cin >> l >> r;
        L[i] = l;
        R[i] = r;
    }
    vector<ll> vec;
    for (ll i=0; i<K; i++) {
        for (ll j=L[i]; j<=R[i]; j++) {
            vec.push_back(j);
        }
    }
}