#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll mod = pow(10,9) + 7;
    ll N;
    cin >> N;
    vector<ll> A(N+1,0);
    for (ll i=1; i<=N; i++) cin >> A[i];
    vector<ll> sumA(N+1,0);
    for (ll i=2; i<=N; i++) {
        sumA[i] = sumA[i-1] + A[i-1];
        if (sumA[i]>=mod) sumA[i] %= mod;
    }
    ll ans = 0;
    for (ll i=2; i<=N; i++) {
        ans += ((A[i]%mod)*(sumA[i]%mod))%mod;
        if (ans>=mod) ans %= mod; 
        if (ans<0) ans += mod;
    }
    if (ans>=mod) ans %= mod;
    if (ans<0) ans += mod;
    cout << ans << endl;
}