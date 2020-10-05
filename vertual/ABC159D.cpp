#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

ll nC2(ll n) {
    if (n==0 or n==1) return 0;
    else if (n==2) return 1;
    else return n*(n-1)/2;
}

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) {
        ll a;
        cin >> a;
        A[i] = a-1;
    }

    vector<ll> cnt(N,0), C(N);
    for (ll i=0; i<N; i++) cnt[A[i]]++;
    for (ll i=0; i<N; i++) C[i] = nC2(cnt[i]);
    ll sum = 0;
    for (ll i=0; i<N; i++) sum += C[i];

    vector<ll> ans(N);
    for (ll i=0; i<N; i++) {
        ans[i] = sum - cnt[A[i]] + 1;
    }
    
    for (ll i=0; i<N; i++) {
        cout << ans[i] << endl;
    }
}