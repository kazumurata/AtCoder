#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;
    ll ans = 1;
    while (N >= K) {
        N /= K;
        ans++;
    }
    cout << ans << endl;
}