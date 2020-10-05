#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int t = A/D, a = C/B;
    if (A%D!=0) t++;
    if (C%B!=0) a++;
    string ans = "No";
    if (t>=a) ans = "Yes";
    cout << ans << endl;
}