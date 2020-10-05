#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> k(9,vector<int>(9));
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            k[i][j] = (i+1)*(j+1);
        }
    }
    string ans = "No";
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (k[i][j] == N) {
                ans = "Yes";
                break;
            }
        }
    }

    cout << ans << endl;
}