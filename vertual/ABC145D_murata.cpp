#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll X, Y;
    cin >> X >> Y;
    ll mod = pow(10,9) + 7;
    ll cnt = 0;
    if ((X+Y)%3!=0) cout << 0 << endl; exit(0);
    cnt = (X+Y)/3;
    ll p = cnt/2;
    if (cnt%2!=0) p++;
    ll n, m;
    for (ll i=0; i<p; i++) {
        if (i+2*(cnt-i)==X and 2*i+cnt-i==Y) n=i; m=cnt-i; break;
    }
    
    ll ans = 1;
    if (n==0) ans = m;
    else if (m==0) ans = n;
    else{
        for (ll i=0; i<min(n,m); i++) {
            ans *= (n+m-min(n,m)+1+i)/(i+1);
            ans %= mod;
        }
    }
    
    cout << ans << endl;
}