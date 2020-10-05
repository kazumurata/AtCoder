#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

ll mod = pow(10,9) + 7;

// x^n (mod p) 計算量 O(logn)
ll powmodp(ll x, ll n, ll p) {
    if (n==0) return 1;
    else if (n%2==0) {
        ll ans = powmodp(x,n/2,p);
        return ans*ans % p;
    }
    else return x * powmodp(x,n-1,p);
}

// 計算量(logN)
ll gcd(ll a, ll b) {
   if (a%b == 0) return b;
   else return gcd(b, a%b);
}

ll lcm(ll a, ll b, ll p) {
   ll ans =  a % p * b % b;
   ans *= powmodp(gcd(a,b),p-2,p);
   return ans;
}

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];
    ll Lcm = A[0];
    for (ll i=1; i<N; i++) {
        Lcm = lcm(Lcm,A[i],mod);
    }
    ll ans = 0;
    for (ll i=0; i<N; i++) {
        ans += Lcm * powmodp(A[i],mod-2,mod);
        ans %= mod;
    }
    cout << ans << endl;
    cout << Lcm << endl;
}