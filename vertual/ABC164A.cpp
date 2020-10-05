#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int S, W;
    cin >> S >> W;
    string ans = "safe";
    if (W>=S) ans = "unsafe";
    cout << ans << endl;
}