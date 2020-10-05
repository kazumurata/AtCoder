#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, M, K;
    cin >> N >> M >> K;
    // vector<ll> A(M), B(M), C(K), D(K);
    vector<vector<ll>> G(N), GF(N), GB(N);
    for (ll i=0; i<M; i++) {
        ll a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
        GF[a].push_back(b);
        GF[b].push_back(a);
    }
    for (ll i=0; i<K; i++) {
        ll c, d;
        cin >> c >> d;
        c--; d--;
        G[c].push_back(d);
        G[d].push_back(c);
        GB[c].push_back(d);
        GB[d].push_back(c);
    }

    vector<ll> cntF(N,0), cntB(N,0);
    for (ll i=0; i<N; i++) {
        cntF[i] = GF[i].size();
        cntB[i] = GB[i].size();
    }

    vector<ll> cnt1(N,0);

    vector<ll> dist(N,-1);
    queue<ll> que;

    for (ll i=0; i<N; i++) {

        if (dist[i]!=-1) {
            cnt1[i] = cnt1[dist[i]];
            continue;
        }

        que.push(i);

        ll cnt = 0;
        while (!que.empty()) {
            ll v = que.front();
            que.pop();
            cnt++;
            for (ll nv : GF[v]) {
                if (dist[nv]!=-1) continue;
                dist[nv] = i;
                que.push(nv);
            }
        }

        cnt1[i] = cnt - 1;
    }

    vector<ll> ans(N);
    for (ll i=0; i<N; i++) {
        ans[i] = cnt1[i] - (cntF[i] + cntB[i]);
    }

    for (ll i=0; i<N; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}