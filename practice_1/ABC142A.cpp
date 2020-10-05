#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    double cnt = 0;
    for (int i=1; i<=N; i++) {
        if (i%2) cnt += 1;
    }
    double ans = cnt/N;
    cout << fixed << setprecision(10);
    cout << ans << endl;
}