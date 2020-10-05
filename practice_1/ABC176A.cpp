#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N, X, T;
    cin >> N >> X >> T;
    int count;
    count = N/X;
    if(N%X != 0) {
        count++;
    }
    int ans = count * T;
    cout << ans << endl;
}