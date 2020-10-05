#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N);
    int all = 0; // 当選者数の合計
    for (int i=0; i<N; i++) {
        cin >> A.at(i);
        all += A.at(i);
    }
    int min, max;
    int M = S-all; // 立候補者数と当選者数の差
    if (M == 0) {
        min = 0;
        max = 0;
    }
    else {
        min = 1;
        if (M>N) {
            max = N;
        }
        else {
            max = M;
        }
    }
    cout << min << " " << max << endl;
}