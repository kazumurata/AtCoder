#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    ll K;
    cin >> K;
    queue<ll> q;
    for (int i=1; i<=9; i++) {
        q.push(i);
    }
    for (ll i=1; i<=K-1; i++) {
        ll x = q.front();
        q.pop();
        ll y = x*10+x%10;
        if (x%10!=0) q.push(y-1);
        q.push(y);
        if (x%10!=9) q.push(y+1);
    }
    cout << q.front() << endl;
}