#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

ll keta(ll N) {
    ll ans = 1;
    while (N>=10) {
        N/=10;
        ans++;
    }
    return ans;
}

int main() {
    ll A, B, X;
    cin >> A >> B >> X;
    vector<ll> vec(11,0);
    for (ll i=1; i<=10; i++) {
        ll N = (X-B*i)/A;
        ll n = keta(N);
        if (i==10) {
            if (N>=pow(10,9)) vec[i] = pow(10,9);
        }
        else if (n>i) {
            vec[i] = pow(10,i)-1;
        }
        else if (n==i) {
            vec[i] = N;
        }
    }
    sort(vec.begin(), vec.end(),greater<ll>());
    cout << vec[0] << endl;
}