#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int K, A, B;
    cin >> K;
    cin >> A >> B;
    int KA = A/K, KB = B/K;
    string ans = "OK";
    if (B<K) {
        ans = "NG";
    }
    else if (B-A<K and A>K*KA and B<K*(KA+1)) {
        ans = "NG";
    }
    cout << ans << endl;
}