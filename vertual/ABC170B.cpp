#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int X, Y;
    cin >> X >> Y;
    string ans = "No";
    for (int i=0; i<=X; i++) {
        for (int j=0; j<=X; j++) {
            if (i+j==X and 2*i+4*j==Y) {
                ans = "Yes";
                break;
            }
        }
    }
    cout << ans << endl;
}