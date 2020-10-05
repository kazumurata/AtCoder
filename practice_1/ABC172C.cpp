#include <bits/stdc++.h>          
using namespace std;         
typedef long long ll;      

int main() {

    // input
    ll N, M, K;
    cin >> N >> M >> K;
    vector<ll> A(N);
    vector<ll> B(M);
    for (ll i=0; i<N; i++) {
        cin >> A.at(i);
    }
    for (ll i=0; i<M; i++) {
        cin >> B.at(i);
    }

    // calculate
    ll T = 0;
    ll a = 0;
    ll b = 0;
    ll count = 0;
    for (ll i=0; i<N+M; i++) {

        // 本が0冊のとき
        if (N<a+1 and M<b+1) {
            break;
        }

        // Bだけ本が残っているとき
        if (N<a+1 and M>=b+1) {
            T += B.at(b);
            b++;
            count++;
            continue;
        }

        // Aだけ本が残っているとき
        if (N>=a+1 and M<b+1) {
            T += A.at(a);
            a++;
            count++;
            continue;
        }

        // 読書時間をプラス
        T += min(A.at(a),B.at(b));

        // 総読書時間がKを越えたとき、ループをぬける
        if (T>K) {
            break;
        }

        // AもBも本が残っているとき
        else {
            if (A.at(a)<=B.at(b)) {
                a++;
                count++;
            }
            else {
                b++;
                count++;
            }
        }
    }
    
    // output
    cout << count << endl;
}