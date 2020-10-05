#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<int> a(Q), b(Q), c(Q), d(Q);
    for (int i=0; i<Q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    vector<vector<int>> A;
    for (int i=1; i<=M; M++) {
        for (int j=0; j<N+1; j++) {
            vector<int> A_temp(N+1);
            if (j==0) {
                A_temp[0] = i;
            }
        }
    }
}