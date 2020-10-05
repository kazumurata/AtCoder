#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> X(N);
    for (ll i=0; i<N; i++) cin >> X[i];
    vector<ll> ans(102);
    for (ll i=0; i<=101; i++) {
        for (ll j=0; j<N; j++) {
            ans[i] += pow((X[j]-i),2);
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans[0] << endl;
}