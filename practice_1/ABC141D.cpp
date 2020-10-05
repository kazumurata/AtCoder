#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

ll inf1 = pow(10,9) + 1;
ll inf2 = -1 * inf1;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for (ll i=0; i<N; i++) cin >> A[i];
    priority_queue<ll> que;
    for (ll i=0; i<N; i++) que.push(A[i]);
    for (ll i=0; i<M; i++) {
        ll v = que.top();
        que.pop();
        que.push(v/2);
    }
    ll ans = 0;
    while (!que.empty()) {
        ans += que.top();
        que.pop();
    }
    cout << ans << endl;
}