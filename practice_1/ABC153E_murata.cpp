#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    ll H, N;
    cin >> H >> N;
    vector<pair<ll,ll>> toki;
    vector<ll> A(N), B(N);
    for (ll i=0; i<N; i++) {
        cin >> A[i] >> B[i];
        toki.push_back({A[i],-1*B[i]});
    }
    sort(toki.begin(),toki.end());
}