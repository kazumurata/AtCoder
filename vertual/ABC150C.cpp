#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    vector<int> Q(N);
    for (int i=0; i<N; i++) cin >> P[i];
    for (int i=0; i<N; i++) cin >> Q[i];

    vector<int> base(N);
    for (int i=0; i<N; i++) base[i] = i+1;

    ll a, b, cnt = 0;
    do {
        cnt++;
        if (P==base) a = cnt;
        if (Q==base) b = cnt; 
    } while (next_permutation(base.begin(),base.end()));

    cout << abs(a-b) << endl;
}