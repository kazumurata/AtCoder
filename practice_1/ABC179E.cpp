#include <bits/stdc++.h>          
using namespace std;       
typedef long long ll;        

int main() {
    ll N, X, M;
    cin >> N >> X >> M;
    ll A = X;
    ll A_new;
    ll ans = 0;
    for (ll i=0; i<N; i++) {
        A_new = (A%M)*(A%M)%M;
        if (A_new == A) {
            ans += (N-i)*A;
            break;
        }
        ans += A;
        A = A_new;
    }
    cout << ans << endl;
}