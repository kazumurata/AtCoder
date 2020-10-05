#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, M, a, b;
    cin >> N >> M;
    vector<vector<ll>> G(N);
    for (ll i=0; i<M; i++) {
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    vector<ll> cnt(N,0);

    vector<ll> dist(N,-1);
    queue<ll> que;
    
    for (ll i=0; i<N; i++) {

        if (dist[i]!=-1) continue;
        dist[i] = 0;
        que.push(i);

        while (!que.empty()) {
            ll v = que.front();
            que.pop();
            for (ll nv : G[v]) {
                if (dist[nv]==-1) {
                    dist[nv] = 0;
                    cnt[i]++;
                    que.push(nv);
                }
            }
        }
    }
    sort(cnt.begin(),cnt.end(),greater<ll>());
    cout << cnt[0]+1 << endl;
}