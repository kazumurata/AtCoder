#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    int ans = N/2;
    if (N%2==1) ans++;
    cout << ans << endl;
}