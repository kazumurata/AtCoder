#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> x(N);
    for (ll i=0; i<N; i++) cin >> x[i];
    vector<ll> time(N-K+1);
    for (ll i=0; i<N-K+1; i++) {
        ll l=i, r=i+K-1;
        ll L=x[l], R=x[r];
        if (L<0 and R<0) time[i] = -1*L;
        else if (L<0 and R>=0) time[i] = R - L + min(-1*L,R);
        else time[i] = R;
    }
    sort(time.begin(),time.end());
    cout << time[0] << endl;
}