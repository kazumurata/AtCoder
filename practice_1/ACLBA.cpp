#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int K;
    cin >> K;
    string S_temp = "ACL";
    string ans = S_temp;
    for (int i=1; i<K; i++) {
        ans += S_temp;
    }
    cout << ans << endl;
}