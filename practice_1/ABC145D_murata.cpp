#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

// x^n (mod p) 計算量 O(logn)
ll powmodp(ll x, ll n, ll p) {
    if (n==0) return 1;
    else if (n%2==0) {
        ll ans = powmodp(x,n/2,p);
        return ans*ans % p;
    }
    else return x * powmodp(x,n-1,p);
}

ll nCkmodp(ll n, ll k, ll p) {
    if (k==0 or n==k) return 0;
    ll x = 1, y = 1;
    k = min(n-k,k);
    for (ll i=n-k+1; i<=n; i++) {
        x *= i;
        x %= p;
    }
    for (ll i=1; i<=k; i++) {
        y *= i;
        y %= p;
    }
    ll ans = x * powmodp(y,p-2,p) % p;
    return ans;
}

int main() {
    ll mod = pow(10,9)+7;

    ll X, Y;
    cin >> X >> Y;
    if ((X+Y)%3) {
        cout << 0 << endl;
        return 0;
    }
    ll nm = (X+Y)/3;
    ll n = X-nm, m = Y-nm;
    if (n<0 or m<0) {
        cout << 0 << endl;
        return 0;
    }
    ll ans = nCkmodp(nm,n,mod);
    cout << ans << endl;
}