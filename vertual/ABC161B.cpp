#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    ll sumA = 0;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        sumA += A[i];
    }
    ll Aj = sumA / (4*M);
    if (sumA%(4*M)!=0) Aj++;
    ll cnt = 0;
    string ans = "No";
    for (int i=0; i<N; i++) {
        if (A[i]>=Aj) cnt++;
        if (cnt==M) {
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;
}