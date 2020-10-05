#include <bits/stdc++.h>          
using namespace std;    
typedef long long ll;           

int main() {

    //
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) {
        cin >> A.at(i);
        if (A.at(i) == 0) {
            cout << 0 << endl;
            exit(0);
        }
    }

    //
    ll ans = 1;
    for (ll i=0; i<N; i++) {
        if (A.at(i) > pow(10,18)/ans) {
            ans = -1;
            break;
        }
        else {
            ans *= A.at(i);
        }
    }
    cout << ans << endl;
}