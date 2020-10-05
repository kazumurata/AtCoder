#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N; cin >> N;
    vector<ll> X(N), Xtmp(N);
    for (ll i=0; i<N; i++) cin >> X[i];
    Xtmp = X;
    sort(Xtmp.begin(),Xtmp.end());
    ll mid1 = Xtmp[N/2], mid2 = Xtmp[N/2-1];
    
    for (ll i=0; i<N; i++) {
        if (X[i]<=mid2) cout << mid1 << endl;
        else cout << mid2 << endl;
    }
}