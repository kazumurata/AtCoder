#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    string S, ans = "Yes";
    cin >> S;
    int N = S.size();
    for (int i=0; i<N; i++) {
        if (i%2 and S[i]=='R') {
            ans = "No";
            break;
        }
        else if (i%2==0 and S[i]=='L') {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
}