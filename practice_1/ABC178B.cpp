#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x,y;
    vector<ll> temp(4);
    temp[0] = a*c;
    temp[1] = a*d;
    temp[2] = b*c;
    temp[3] = b*d;
    ll ans = temp[0];
    for (int i=0; i<4; i++) {
        ans = max(ans,temp[i]);
    }
    cout << ans << endl;
}