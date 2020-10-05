#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    string S;
    cin >> S;
    ll ans = 1;
    for (ll i=1; i<N; i++) {
        if (S[i]!=S[i-1]) ans++;
    }
    cout << ans << endl;
}