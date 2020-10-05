#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;
    string ans = "Yes";
    if (S[0]==S[1] and S[1]==S[2]) ans = "No";
    cout << ans << endl;
}