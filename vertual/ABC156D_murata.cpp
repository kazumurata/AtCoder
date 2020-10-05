#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

// x^n (mod p) 計算量 O(logn)
ll powermodp(ll x, ll n, ll p) {
    if (n==0) return 1;
    else if (n%2==0) {
        ll ans = powermodp(x,n/2,p);
        return ans*ans % p;
    }
    else return x * powermodp(x,n-1,p);
}

// nCr (mod p) 計算量 O(n-r)
ll nCrmodp(ll n, ll r, ll p) {
    ll inf = 510000;
    if (r==0 or r==n) return 1;
    else if (n<r or n<0 or r<0) return 0;
    else if (n<=inf) {
        ll fac[inf+1], finv[inf+1], inv[inf+1];
        fac[0] = fac[1] = 1;
        finv[0] = finv[1] = 1;
        inv[1] = 1;
        for (ll i=2; i<=inf; i++) {
            fac[i] = fac[i-1] * i % p;
            inv[i] = p - inv[p%i] * (p/i) % p;
            finv[i] = finv[i-1] * inv[i] % p;
        }
        return fac[n] * (finv[r] * finv[n-r] % p) % p;
    }
    else {
        ll x = n, ans = 1;
        for (ll i=0; i<min(r,n-r); i++) {
            ans = (ans * ((x-i)/(i+1))) % p;
        }
        return ans;
    }
}

/*
// nCr (mod p) 計算量 O(n-r)
ll nCrmodp(ll n, ll r, ll p) {
    ll x=1, y=1;
    if (r==0 or r==n) return 1;
    else if (n<r or n<0 or r<0) return 0;
    else {
        // x = n*(n-1)*...*(n-r+2)*(n-r+1)
        for (ll i=n-min(r,n-r)+1; i<=n; i++) {
            x = (x * i) % p;
        }
        // y = r*(r-1)*...*2*1
        for (ll i=1; i<=min(r,n-r); i++) {
            y = (y * i) % p;
        }
        // x/y = x*y^(-1) = x*y^(-1)*y^(p-1) = x*y^(p-2)
        ll ans = (x * powermodp(y,p-2,p)) % p;
        return ans;
    }
}
*/

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll mod = pow(10,9) + 7;
    
    ll ans = powermodp(2,n,mod) - 1;

    ans = (ans - nCrmodp(n,a,mod) + mod) % mod;

    ans = (ans - nCrmodp(n,b,mod) + mod) % mod;

    cout << ans << endl;
    cout << powermodp(2,n,mod) << endl;
    cout << nCrmodp(n,a,mod) << endl;
    cout << nCrmodp(n,b,mod) << endl;
}