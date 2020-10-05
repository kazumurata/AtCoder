#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string ans = "No";
    int A, B, C;
    cin >> A >> B >> C;
    if (A==B and C!=A) ans = "Yes";
    else if (B==C and A!=B) ans = "Yes";
    else if (C==A and B!=C) ans = "Yes";
    cout << ans << endl;
}