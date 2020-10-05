#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S, ans = "No";
    cin >> S;
    if (S[2]==S[3] and S[4]==S[5]) ans = "Yes";
    cout << ans << endl;
}