#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    string ans = "No";
    if (A==B and A!=C) ans = "Yes";
    else if (B==C and B!=A) ans = "Yes";
    else if (C==A and C!=B) ans = "Yes";
    cout << ans << endl;
}