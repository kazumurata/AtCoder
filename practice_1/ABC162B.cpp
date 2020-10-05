#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    ll ans = 0;
    for (ll i=1; i<=N; i++) {
        if(i%3 == 0 or i%5 == 0) {
            continue;
        }
        ans += i;
    }
    cout << ans << endl;
}