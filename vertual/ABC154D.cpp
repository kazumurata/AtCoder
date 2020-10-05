#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
    ld N, K;
    cin >> N >> K;
    vector<ld> p(N);
    for (ll i=0; i<N; i++) cin >> p[i];
    vector<ld> P(N);
    for (ll i=0; i<N; i++) P[i] = ((p[i]+1)*p[i]/2) / p[i];

    vector<ld> dp(N-K+1,0);
    for (ll i=0; i<K; i++) {
        dp[0] += P[i];
    }
    for (ll i=1; i<=N-K; i++) {
        ld p0 = P[i-1];
        ld pK = P[i+K-1];
        dp[i] = dp[i-1] - p0 + pK;
    }
    sort(dp.begin(),dp.end(),greater<ld>());
    cout << fixed << setprecision(9);
    cout << dp[0] << endl;
    /*
    cout << endl;
    ll n = dp.size();
    for (ll i=0; i<n; i++) {
        cout << dp[i] << endl;
    }
    */
}