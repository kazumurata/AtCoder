#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> p(M);
    vector<string> S(M);
    for (ll i=0; i<M; i++) {
        int P;
        cin >> P >> S[i];
        p[i] = P-1;
    }

    vector<bool> vec(N,false);
    vector<ll> A(N,0), W(N,0);

    ll AC = 0, WA = 0;
    for (ll i=0; i<M; i++) {
        if (S[i]=="AC") {
            if (vec[p[i]]==false) {
                vec[p[i]] = true;
                AC++;
            }
            else continue;
        }
        else {
            if (vec[p[i]]==false) W[p[i]]++;
            else continue;
        }
    }

    for (ll i=0; i<N; i++) {
        if (vec[i]==true) WA += W[i];
    }

    cout << AC << ' ' << WA << endl;
}