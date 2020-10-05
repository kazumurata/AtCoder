#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];
    sort(A.begin(),A.end());
    string ans = "YES";
    for (ll i=1; i<N; i++) {
        if (A[i]==A[i-1]) {
            ans = "NO";
            break;
        }
    }
    cout << ans << endl;
}