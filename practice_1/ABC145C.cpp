#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
    ld N;
    cin >> N;
    vector<ld> x(N), y(N);
    for (ll i=0; i<N; i++) cin >> x[i] >> y[i];
    ld nP1 = 1;
    for (ll i=0; i<=N; i++) nP1 *= i;

    ld sumd = 0;
    for (ll i=0; i<N; i++) {
        for (ll j=i+1; j<N; j++) {
            sumd += sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));
        }
    }
    ld ans = 2*sumd/N;
    cout << fixed << setprecision(9);
    cout << ans << endl;
}