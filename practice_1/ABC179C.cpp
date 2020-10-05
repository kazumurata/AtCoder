#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;
/*
ll enum_divisors(ll N) {
    ll count = 0;
    for (ll i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            count++;
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) count++;
        }
    }
    return count;
}
*/
int main() {
    ll N;
    cin >> N;

    ll count = 0;
    for (ll c=1; c<=N-1; c++) {
        for (ll b=1; b<=N-c; b++) {
            if ((N-c)%b == 0) {
                count++;
            }
        }
    }
    cout << count << endl;
}