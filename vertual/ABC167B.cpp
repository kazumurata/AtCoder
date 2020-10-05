#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll A, B, C, K;
    cin >> A >> B >> C >> K;
    ll ans = 0;
    if (K<=A) {
        ans = K;
    }
    else if (A<K and K<=A+B) {
        ans = A;
    }
    else {
        ans = A - (K-(A+B));
    }
    cout << ans << endl;
}