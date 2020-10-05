#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll D, T, S;
    cin >> D >> T >> S;
    string ans = "No";
    if (D <= S*T) ans = "Yes";
    cout << ans << endl;
}