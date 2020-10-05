#include <bits/stdc++.h>          
using namespace std;        
typedef long long ll;       

int main() {
    ll N, K;
    string S;
    cin >> N >> K >> S;
    string S_tmp(K,'.');
    S += S_tmp;

    ll inf = 1e9;

    vector<ll> dp(N+K+1,inf);
    dp[0] = 0;
    for (ll i=1; i<=K; i++) {
        if (S[i-1]=='.') dp[i] = 1;
    }
    for (ll i=1; i<=N; i++) {
        if (S[i-1]=='.' and S[i+K-1]=='.') dp[i+K] = min( dp[i] + 1 , dp[i+K] );
    }

    ll ans = inf;
    for (ll i=N; i<N+K; i++) {
        ans = min( ans , dp[i] );
    }

    if (ans == inf) ans = -1;

    cout << ans << endl;
    /*
    for (ll i=0; i<N+K; i++) {
        cout << dp[i] << " ";
    }
    cout << endl;
    */
}