#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    vector<ll> p(A), q(B), r(C);
    for (ll i=0; i<A; i++) cin >> p[i];
    for (ll i=0; i<B; i++) cin >> q[i];
    for (ll i=0; i<C; i++) cin >> r[i];
    sort(p.begin(),p.end(),greater<ll>());
    sort(q.begin(),q.end(),greater<ll>());
    sort(r.begin(),r.end());
    vector<ll> apple(X+Y+C);
    for (ll i=0; i<X; i++) {apple[i]=p[i];}
    for (ll i=0; i<Y; i++) {apple[X+i]=q[i];}
    for (ll i=0; i<C; i++) {apple[X+Y+i]=r[i];}
    sort(apple.begin(),apple.end(),greater<ll>());
    ll ans = 0;
    for (ll i=0; i<X+Y; i++) {ans += apple[i];}
    cout << ans << endl;
    /*
    vector<ll> apple(X+Y);
    for (ll i=0; i<X; i++) {
        apple[i] = p[i];
    }
    for (ll i=0; i<Y; i++) {
        apple[X+i] = q[i];
    }
    sort(apple.begin(),apple.end());

    queue<ll> que, quer;
    for (ll i=0; i<X+Y; i++) {
        que.push(apple[i]);
    }

    ll cntr = 0;
    for (ll i=0; i<C; i++) {
        ll x = que.front();
        if (r[i]>x) {
            que.pop();
            quer.push(r[i]);
            cntr++;
        }
        else {
            if (cntr!=0) {
                quer.pop();
                quer.push(r[i]);
            }
        }
    }

    ll ans = 0;
    while (que.size()!=0) {
        ans += que.front();
        que.pop();
    }
    while (quer.size()!=0) {
        ans += quer.front();
        quer.pop();
    }

    cout << ans << endl;
    */
}