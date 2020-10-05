#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];

    ll ans = (N-1)/(K-1);
    if ((N-1)%(K-1)!=0) ans++;
    cout << ans << endl;
    /*
    ll int1;
    for (ll i=0; i<N; i++) if (A[i]==1) int1 = i;

    ll ansm = int1/(K-1);
    ll ansp = (N-1-int1)/(K-1);
    if (int1%(K-1)!=0) ansm++;
    if ((N-1-int1)%(K-1)!=0) ansp++;

    ll ans = ansm + ansp;
    cout << ans << endl;
    */
}