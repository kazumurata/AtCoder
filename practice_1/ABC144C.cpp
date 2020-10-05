#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    ll ans;
    for (ll i=sqrt(N); i>=1; i--) {
        if (N%i==0) {
            ans = (N/i-1) + (i-1);
            break;
        }
    }
    cout << ans << endl;
}