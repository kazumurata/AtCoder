#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, a;
    cin >> N;
    vector<ll> ans(N,0);
    for (ll i=0; i<N-1; i++) {
        cin >> a;
        ans[a-1]++;
    }
    for (ll i=0; i<N; i++) {
        cout << ans[i] << endl;
    }
}