#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    
    vector<vector<ll>> v(10,vector<ll>(10,0));
    for (ll i=1; i<=N; i++) {
        ll I = i;
        while (I>=10) I /= 10;
        ll a = I, b = i%10;
        v[a][b]++;
    }

    ll ans = 0;
    for (ll i=1; i<=9; i++) {
        for (ll j=1; j<=9; j++) {
            ans += v[i][j] * v[j][i];
        }
    }
    cout << ans << endl;
    /*
    for (ll i=1; i<=9; i++) {
        for (ll j=1; j<=9; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    */
}