#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, R;
    cin >> N >> R;
    ll ans = R;
    if (N<10) ans += 100*(10-N);
    cout << ans << endl;
}