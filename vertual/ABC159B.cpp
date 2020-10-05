#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S;
    cin >> S;
    string ans = "Yes";
    int N = S.size();
    for (int i=0; i<N; i++) {
        if (S[i]!=S[N-1-i]) {
            ans = "No";
            cout << ans << endl;
            exit(0);
        }
    }
    for (int i=0; i<(N-1)/2; i++) {
        if (S[i]!=S[(N-1)/2-1-i]) {
            ans = "No";
            cout << ans << endl;
            exit(0);
        }
    }
    for (int i=0; i<(N-1)/2; i++) {
        if (S[(N+3)/2-1+i]!=S[N-1-i]) {
            ans = "No";
            cout << ans << endl;
            exit(0);
        }
    }
    cout << ans << endl;
}