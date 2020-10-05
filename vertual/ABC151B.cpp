#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N, K, M, A=0;
    cin >> N >> K >> M;
    for (int i=0; i<N-1; i++) {
        int a;
        cin >> a;
        A += a;
    }
    int ans = -1;
    if (N*M-A<=K) ans = max(0,N*M-A);
    cout << ans << endl;
}