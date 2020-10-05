#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    if (N%2!=0) {
        cout << "No" << endl;
        exit(0);
    }
    vector<char> T(N/2);
    for (int i=0; i<N/2; i++) T[i] = S[i];
    string ans = "Yes";
    for (int i=0; i<N/2; i++) {
        if (T[i]!=S[i+N/2]) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
}