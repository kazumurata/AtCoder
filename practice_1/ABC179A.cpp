#include <bits/stdc++.h>          
using namespace std;               

int main() {
    string S;
    cin >> S;
    int N = S.size();
    string ans;
    if (S[N-1]=='s') {
        ans = S + "es";
    }
    else {
        ans = S + 's';
    }
    cout << ans << endl;
}