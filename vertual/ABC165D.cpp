#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll A, B, N;
    cin >> A >> B >> N;
    ll ansint = min(N,B-1);
    ll ans = (A*ansint)/B - A*(ansint/B);
    cout << ans << endl;
}