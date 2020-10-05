#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    string ans = "No";
    if (C<A) {
        if (A<=D) ans = "Yes";
    }
    else if (A<=C and C<=B) ans = "Yes";
    cout << ans << endl;
}