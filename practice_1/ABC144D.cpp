#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
    ld a, b, x;
    cin >> a >> b >> x;
    ld v = a*a*b;
    ld y = v - x;
    ld Sx = x/a, Sy = y/a;
    ld Sj = v/(a*2);
    ld ans;
    if (Sx>=Sj) {
        ans = atan((2*Sy)/(a*a));
    }
    else {
        ans = atan((b*b)/(2*Sx));
    }
    ld pi = 3.14159265358979323846;
    ans *= 180/pi;
    cout << fixed << setprecision(10);
    cout << ans << endl;
}