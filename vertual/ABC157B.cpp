#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    vector<vector<int>> A(3,vector<int>(3));
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;
    vector<int> b(N);
    for (int i=0; i<N; i++) cin >> b[i];

    for (int i=0; i<N; i++) {
        for (int j=0; j<3; j++) {
            for (int k=0; k<3; k++) {
                if (b[i]==A[j][k]) A[j][k] = 0;
            }
        }
    }

    string ans = "No";

    vector<int> jud(8,0);
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            jud[i] += A[i][j];
        }
    }
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            jud[3+i] += A[j][i];
        }
    }
    for (int i=0; i<3; i++) jud[6] += A[i][i];
    for (int i=0; i<3; i++) jud[7] += A[i][2-i];

    for (int i=0; i<8; i++) {
        if (jud[i]==0) {
            ans = "Yes";
            break;
        }
    }

    cout << ans << endl;
}