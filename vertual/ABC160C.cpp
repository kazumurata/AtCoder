#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll K, N;
    cin >> K >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];
    sort(A.begin(),A.end());
    vector<ll> L(N);
    for (ll i=0; i<N; i++) {
        if (i==N-1) {L[i] = K - A[i] + A[0];}
        else {L[i] = A[i+1] - A[i];}
    }
    sort(L.begin(),L.end());
    reverse(L.begin(),L.end());
    cout << K - L[0] << endl;
}