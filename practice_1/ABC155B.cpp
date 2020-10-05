#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    string ans = "APPROVED";
    for (int i=0; i<N; i++) {
        if (A[i]%2==0) {
            if (A[i]%3!=0 and A[i]%5!=0) {
                ans = "DENIED";
                break;
            }
        }
    }
    cout << ans << endl;
}