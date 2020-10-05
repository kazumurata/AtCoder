#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<ll> v(4);
    v[0] = a*c;
    v[1] = a*d;
    v[2] = b*c;
    v[3] = b*d;
    sort(v.begin(),v.end(),greater<ll>());
    cout << v[0] << endl;
}