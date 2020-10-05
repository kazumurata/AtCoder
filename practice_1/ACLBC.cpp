#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> G(N);
    for (ll i=0; i<M; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<ll> dist(N,-1);
    queue<ll> que;
    ll ans = 0;
    for (ll i=0; i<N; i++) {
        if (dist[i]!=-1) continue;
        dist[i] = 1;
        que.push(i);
        while(!que.empty()) {
            ll v = que.front();
            que.pop();
            for (ll nv : G[v]) {
                if (dist[nv] == -1) {
                    dist[nv] = 1;
                    que.push(nv);
                }
            }
        }
        ans++;
    }
    ans--;
    cout << ans << endl;
}