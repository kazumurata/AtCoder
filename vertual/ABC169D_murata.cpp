#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

vector<ll> prime;

void prime_factorize(ll N) {
    if (N <= 1) {
        return;
    }
    for (ll i=2; i*i<=N; i++) {
        if (N%i == 0) {
            prime_factorize(i);
            prime_factorize(ll(N/i));
            return;
        }
    }
    prime.push_back(N);
    return;
}

int main() {
    ll N;
    cin >> N;
    if (N==1) {
        cout << 0 << endl;
        exit(0);
    }
    prime_factorize(N);
    ll n = prime.size();

    vector<ll> p(n);
    p[0] = prime[0];
    for (ll i=1; i<n; i++) {
        if (prime[i] == prime[i-1]) {
            p[i] = p[i-1] * prime[i];
        }
        else {
            p[i] = prime[i];
        }
    }
    // sort(p.begin(),p.end());

    ll count = 0; 
    for (ll i=0; i<n; i++) {
        if (N/p[i]==1) {
            count++;
            break;
        }
        else {
            count++;
            N /= p[i];
        }
    }

    cout << count << endl;
    // /*
    for (ll i=0; i<prime.size(); i++) {
        cout << p[i] << endl;
    }
    // */
    // cout << prime.size() << endl;
}