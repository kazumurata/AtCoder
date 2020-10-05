#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    string ans = "APPROVED";
    for (int i=0; i<N; i++) {
        cin >> A[i];
        if (A[i]%2==0) {
            if (A[i]%3!=0 and A[i]%5!=0) ans = "DENIED";
        }
    }
    cout << ans << endl;
}