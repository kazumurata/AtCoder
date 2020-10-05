#include <bits/stdc++.h>          
using namespace std;               

int main() {
    string S;
    cin >> S;
    int ans;
    if (S=="SSS") {
        ans = 0;
    }
    else if (S=="SRR" or S=="RRS") {
        ans = 2;
    }
    else if (S=="RRR") {
        ans = 3;
    }
    else {
        ans = 1;
    }
    cout << ans << endl;
}