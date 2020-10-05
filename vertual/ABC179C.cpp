#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    ll ans = 0;
    for (ll A=1; A<=N-1; A++) {
        ans += (N-1)/A;
        /*
        if ((N-1)%A==0) ans += (N-1)/A;
        else ans += (N-1)/A;
        */
    }
    cout << ans << endl;
}