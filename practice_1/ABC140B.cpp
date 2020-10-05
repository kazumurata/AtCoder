#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);
    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        A[i] = a-1;
    }
    for (int i=0; i<N; i++) cin >> B[i];
    for (int i=1; i<N; i++) cin >> C[i];
    int ans = B[A[0]];
    for (int i=1; i<N; i++) {
        ans += B[A[i]];
        if (A[i] == A[i-1] + 1) ans += C[A[i]];
    }
    cout << ans << endl;
}