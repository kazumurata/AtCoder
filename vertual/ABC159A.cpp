#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N, M;
    cin >> N >> M;
    int nmC2 = (N+M)*(N+M-1)/2;
    int NM = N*M;
    int ans = nmC2 - N*M;
    cout << ans << endl;
}