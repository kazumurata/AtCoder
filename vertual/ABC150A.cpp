#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll K, X;
    cin >> K >> X;
    string ans = "No";
    if (500*K>=X) ans = "Yes";
    cout << ans << endl;
}