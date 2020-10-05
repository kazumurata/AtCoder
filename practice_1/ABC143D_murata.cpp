#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> L(N);
    for (ll i=0; i<N; i++) cin >> L[i];

    vector<vector<ll>> Lmin(N,vector<ll>(N)), Lmax(N,vector<ll>(N));
    vector<ll> Lsum(10001);
    for (ll i=0; i<N; i++) {
        Lsum[L[i]]++;
    }
    for (ll i=1; i<N; i++) Lsum[i] += Lsum[i-1];

    for (ll i=0; i<N-1; i++) {
        for (ll j=i+1; j<N; j++) {
            Lmax[i][j] = L[i] + L[j] - 1;
            Lmin[i][j] = abs( L[i] - L[j] ) + 1;
        }
    }

    ll ans = 0;
    for (ll i=0; i<N-1; i++) {
        for (ll j=i+1; j<N; j++) {
        }
    }
}