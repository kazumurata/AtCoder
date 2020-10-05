#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, A, B;
    cin >> N >> A >> B;
    
    ll ans = A*(N/(A+B));
    N %= (A+B);
    if (N<=A) ans += N;
    else ans += A;
    cout << ans << endl;
}