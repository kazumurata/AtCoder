#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll H;
    cin >> H;
    if (H==1) {
        cout << 1 << endl;
        exit(0);
    }
    else {
        ll cnt = 0;
        while (H>1) {
            H /= 2;
            cnt++;
        }
        ll ans = 1 + pow(2,cnt+1) - 2;
        cout << ans << endl;
        exit(0);
    }
}