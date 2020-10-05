#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    vector<char> a = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char C;
    cin >> C;
    char ans;
    for (ll i=0; i<25; i++) {
        if (a[i] == C) ans = a[i+1];
    }
    cout << ans << endl;
}