#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    // データのインプット
    string S;
    cin >> S;
    ll Q, N=S.size();
    cin >> Q;
    vector<ll> T(Q), F(Q);
    vector<char> C(Q);
    for (ll i=0; i<Q; i++) {
        cin >> T[i];
        if (T[i]==2) cin >> F[i] >> C[i];
    }

    // deque作製
    deque<char> deq;
    for (ll i=0; i<N; i++) deq.push_back(S[i]);

    // クリエの処理
    ll cntrev = 0; // 反転の回数
    for (ll i=0; i<Q; i++) {
        // Ti が 1 のとき反転の回数をカウント
        if (T[i]==1) cntrev++;
        else {
            // 反転が偶数回の時
            if (cntrev%2==0) {
                if (F[i]==1) deq.push_front(C[i]);
                else         deq.push_back(C[i]);
            }
            // 反転が奇数回の時
            else {
                if (F[i]==1) deq.push_back(C[i]);
                else         deq.push_front(C[i]);
            }
        }
    }
    N = deq.size();

    // 答え用のベクトル作製
    vector<char> ans;
    for (ll i=0; i<N; i++) {
        ans.push_back(deq.front());
        deq.pop_front();
    }
    
    // もし反転が必要であれば反転
    if (cntrev%2==1) reverse(ans.begin(),ans.end());
    
    //　答えのアウトプット
    for (ll i=0; i<N; i++) cout << ans[i];
    cout << endl;
}