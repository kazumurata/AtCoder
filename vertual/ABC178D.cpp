#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

ll mod = pow(10,9)+7;

vector<vector<ll>> combinate(ll n, ll r) {
    vector<vector<ll>> v(n+1,vector<ll>(n+1,0));
    for (ll i=0; i<v.size(); i++) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (ll i=1; i<v.size(); i++) {
        for (ll j=1; j<i; j++) {
            v[i][j] = v[i-1][j-1] + v[i-1][j];
            if (v[i][j]>mod) v[i][j]%=mod;
        }
    }
    return v;
}

int main() {
    
    ll S;
    cin >> S;
    ll N = S/3;
    ll ans = 0;
    for (ll i=1; i<=N; i++) {
        vector<vector<ll>> v = combinate(S-3*i+i-1,i-1);
        ans += v[S-3*i+i-1][i-1];
        if (ans>mod) ans%=mod;
    }
    cout << ans << endl;
}