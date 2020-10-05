#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll H, N, A=0;
    cin >> H >> N;
    for (ll i=0; i<N; i++) {
        ll a;
        cin >> a;
        A += a;
    }
    string ans = "No";
    if (H<=A) ans = "Yes";
    cout << ans << endl;
}