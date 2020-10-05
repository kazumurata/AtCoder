#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> P(N), C(N);
    for (ll i=0; i<N; i++) {
        cin >> P[i];
    }
    for (ll i=0; i<N; i++) {
        cin >> C[i];
    }

    vector<pair<ll,ll>> PC;
    for (ll i=0; i<N; i++) {
        PC.push_back({P[i],C[i]});
    }
    sort(PC.begin(),PC.end());

    vector<ll> point(N);
    for (ll i=0; i<N; i++) {
        
    }

    ll Knew = N%N;
}