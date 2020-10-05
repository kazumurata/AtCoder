#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<string> S(N);
    for (ll i=0; i<N; i++) {
        cin >> S[i];
    }

    if (N==1) {
        cout << 1 << endl;
        exit(0);
    }

    sort(S.begin(),S.end());

    // for (ll i=0; i<N; i++) cout << S[i] << endl;

    ll cnt = 1;
    for (ll i=1; i<N; i++) {
        if (S[i]!=S[i-1]) cnt++;
    }

    cout << cnt << endl;
}