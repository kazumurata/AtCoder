#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    vector<int> A(N-1);
    int all = 0;
    for (int i=0; i<N-1; i++) {
        cin >> A[i];
        all += A[i];
    }
    int x = N*M - all;
    if (x>K) {
        x = -1;
    }
    else if (x<0) {
        x = 0;
    }
    cout << x << endl;
}