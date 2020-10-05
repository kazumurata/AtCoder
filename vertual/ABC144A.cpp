#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int A, B;
    cin >> A >> B;
    int ans = A*B;
    if (A>=10 or B>=10) ans = -1;
    cout << ans << endl;
}