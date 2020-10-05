#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll H, A;
    cin >> H >> A;
    ll ans = H / A;
    if (H%A!=0) ans++;
    cout << ans << endl;
}