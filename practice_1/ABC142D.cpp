#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll a, b;
    cin >> a >> b;
    ll A = min(a,b), B = max(a,b);
    vector<bool> Aj(sqrt(A)+2,false);
    vector<ll> prime;
    ll NAj = Aj.size();
    for (ll i=2; i*i<=A; i++) {
        if (Aj[i]) continue;
        for (ll j=i; j<NAj; j+=i) if (Aj[j]==0) Aj[j] = true;
        if (A%i==0) prime.push_back(i);
    }
    ll Npr = prime.size();

    ll ans = 1;
    for (ll i=0; i<Npr; i++) {
        if (B%prime[i]==0) ans++;
    }
    cout << ans << endl;
}