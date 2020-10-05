#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll N, a;
    cin >> N;
    vector<ll> A(N), wa(N), sa(N), waint, saint, wacnt, sacnt;
    for (ll i=0; i<N; i++) {
        cin >> a;
        A[i] = a - 1;
        wa[i] = i + A[i];
        sa[i] = i - A[i];
    }
    sort(wa.begin(),wa.end());
    sort(sa.begin(),sa.end());

    waint[0]=wa[0], saint[0]=sa[0];
    waint[0]=wa[0];
    for (ll i=0; i<N; i++) {
        if (sa[i]>=0) saint[0]=sa[i];
    }
    ll w=0, s=0;
    for (ll i=0; i<N; i++) {
        
        if (waint[w]!=wa[i]) {
            waint.push_back(wa[i]);
            wacnt.push_back(0);
            w++;
        }
        else if (waint[w]==wa[i]) wacnt[w]++;

        if (saint[s]!=sa[i] and sa[i]>=0) {
            saint.push_back(sa[i]);
            sacnt.push_back(0);
            s++;
        }
        else if (saint[s]==sa[i] and sa[i]>=0) sacnt[s]++;

    }

    ll ans=0, Nw=waint.size(), Ns=saint.size();

    for (ll i=0; i<Nw; i++) {
        for (ll j=0; j<Ns; j++) {
            if (waint[i]==saint[j]) ans += min(wacnt[i],saint[j]);
        }
    }

    cout << ans << endl;
}