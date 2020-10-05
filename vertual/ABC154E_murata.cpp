#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

ll keta(ll N) {
    ll ans = 1;
    while (N>=10) {
        N /= 10;
        ans++;
    }
    return ans;
}

ll nCr(ll n, ll r) {
    r = min(r,n-r);
    ll x=1, y=1;
    for (ll i=1; i<=r; i++) {
        y *= i;
    }
    for (ll i=n-r+1; i<=n; i++) {
        x *= i;
    }
    return x/y;
}

int main() {
    vector<char> Nc;
    char nn = 'a';
    while (nn!='\n') {
        cin >> nn;
        Nc.push_back(nn);
    }
    ll keta = Nc.size();
    vector<int> N(keta);
    for (ll i=0; i<keta; i++) {
        N[i] = Nc[i] - '0';
    }
    ll K;
    cin >> K;

    vector<vector<ll>> dp1(keta+1,vector<ll>(K+1,0));
    vector<vector<ll>> dp2(keta+1,vector<ll>(K+1,0));
}