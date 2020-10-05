#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll H, N, maxA=pow(10,4)+1, maxB=0;
    cin >> H >> N;
    vector<ll> A(N+1), B(N+1);
    for (ll i=1; i<=N; i++) {
        cin >> A[i] >> B[i];
        maxA = max( maxA , A[i]);
        maxB = max( maxB , B[i]);
    }
    vector<ll> dp(H+maxA+1,H*maxB+1);
    dp[0] = 0;
    for (ll i=0; i<=H; i++) {
        if (dp[i]!=H*maxB+1) {
            for (ll j=1; j<=N; j++) {
                dp[i+A[j]] = min( dp[i+A[j]] , dp[i] + B[j] );
            }
        }
    }
    
    ll ans = H*maxB + 1;
    for (ll i=H; i<=H+maxA; i++) ans = min( ans , dp[i] );
    cout << ans << endl;
    
    /*
    vector<vector<ll>> dp(N+1,vector<ll>(H+1,sumB+1));
    for (ll i=0; i<=H; i++) {
        if (i%A[1]!=0) dp[1][i] = B[1] * (i/A[1]+1);
    }
    for (ll i=2; i<=N; i++) {
        for (ll a=0; a<=H; a++) {
            if (a>=A[i]) dp[i][a] = min( dp[i-1][a] , dp[i-1][a-A[i]] + B[i] );
            else dp[i][a] = min( dp[i-1][a] , B[i] );
        }
    }
    cout << dp[N][H] << endl;
    */
}