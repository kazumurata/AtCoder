#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    string ans = "No";
    for (int i=1; i<=9; i++) {
        if (N%i==0 and N/i<10) {
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;
}