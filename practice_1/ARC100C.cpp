#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];
    vector<ll> B(N);
    for (ll i=0; i<N; i++) B[i] = A[i] - (i+1);
    sort(B.begin(),B.end());
    ll ans = 0;
    if (N%2==0) {
        ll b1 = B[N/2-1], b2 = B[N/2], ans1 = 0, ans2 = 0;
        for (ll i=0; i<N; i++) {
            ans1 += abs(A[i]-(b1+i+1));
            ans2 += abs(A[i]-(b2+i+1));
        }
        ans = min(ans1,ans2);
    }
    else {
        ll b = B[(N-1)/2];
        for (ll i=0; i<N; i++) ans += abs(A[i]-(b+i+1));
    }

    cout << ans << endl;
}