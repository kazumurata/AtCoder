#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> s(M), c(M);
    for (int i=0; i<M; i++) {
        int S, C;
        cin >> S >> C;
        s[i] = S-1;
        c[i] = C;
    }

    vector<int> ans(N,0), dist(N,0);
    ans[0] = 1;
    ans[N-1] = 0;
    int flag = 0;

    if (N!=1) {
        for (int i=0; i<M; i++) {

            if (s[i]==0 and c[i]==0) {
                cout << -1 << endl;
                exit(0);
            }

            else if (dist[s[i]]!=0) {
                if (ans[s[i]]!=c[i]) {
                    cout << -1 << endl;
                    exit(0);
                }
            }

            else {
                ans[s[i]] = c[i];
                dist[s[i]] = 1;
            }

        }
    }

    else {
        for (int i=0; i<M; i++) {

            if (dist[s[i]]!=0) {
                if (ans[s[i]]!=c[i]) {
                    cout << -1 << endl;
                    exit(0);
                }
            }

            else {
                ans[s[i]] = c[i];
                dist[s[i]] = 1;
            }

        }
    }

    for (int i=0; i<N; i++) {
        cout << ans[i];
    }
    cout << endl;
}