#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    string ans = "Yes";
    if (A==B and B==C and C==A) {
        ans = "No";
    }
    else if (A!=B and B!=C and C!=A) {
        ans = "No";
    }
    cout << ans << endl;
}