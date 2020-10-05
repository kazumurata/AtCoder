#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];
    vector<ll> ans(N+1);
    for (ll i=0; i<N; i++) ans[A[i]] = i+1;
    for (ll i=1; i<=N; i++) cout << ans[i] << " ";
    cout << endl;
}