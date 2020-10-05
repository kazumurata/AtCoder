#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

// 計算量(logN)
ll gcd(ll a, ll b) {
   if (a%b == 0) return b;
   else return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
   return a*b / gcd(a, b);
}

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> a(N);
    for (ll i=0; i<N; i++) {
        cin >> a[i];
    }
    ll t=0;
    while (a[0]%2==0) {
        a[0] /= 2;
        t++;
    }
    for (ll i=1; i<N; i++) {
        ll cnt = 0;
        while (a[i]%2==0) {
            a[i] /= 2;
            cnt++;
        }
        if (t!=cnt) {
            cout << 0 << endl;
            return 0;
        }
    }
    ll p = pow(2,t);
    M /= p; 
    ll L = a[0];
    for (ll i=1; i<N; i++) {
        L = lcm(L,a[i]);
    }
    ll ans = ((M/L)+1)/2;
    cout << ans << endl;
}