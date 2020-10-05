#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];
    string Yes = "APPROVED", No = "DENIED";
    string ans = Yes;
    for (ll i=0; i<N; i++) {
        if (A[i]%2==0) {
            if (A[i]%3!=0 and A[i]%5!=0) {
                ans = No;
                break;
            }
        }
    }
    cout << ans << endl;
}