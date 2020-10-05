#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

// 計算量(logN)
ll gcd(ll a, ll b) {
   if (a%b == 0) return b;
   else return gcd(b, a%b);
}

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];
    string ans = "not coprime";

    ll flag = 0;
    for (ll i=0; i<N-1; i++) {
        ll G = gcd(A[i],A[i+1]);
        if (G!=1) break;
        else flag++;
    }
    if (flag==N-1) {
        cout << "pairwise coprime" << endl;
        return 0;
    }

    ll G = A[0];
    for (ll i=1; i<N; i++) G = gcd(G,A[i]);
    if (G==1) {
        cout << "setwise coprime" << endl;
        return 0;
    }
    
    cout << ans << endl;
}