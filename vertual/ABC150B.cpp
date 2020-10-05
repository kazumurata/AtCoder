#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    ll ans = 0;
    for (int i=0; i<N-2; i++) {
        if (S[i]=='A' and S[i+1]=='B' and S[i+2]=='C') ans++;
    }
    cout << ans << endl;
}