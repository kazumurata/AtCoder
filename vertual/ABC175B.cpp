#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<ll> L(N);
    for (int i=0; i<N; i++) {
        cin >> L[i];
    }

    int count = 0;
    for (int i=0; i<N-2; i++) {
        for (int j=i+1; j<N-1; j++) {
            for (int k=j+1; k<N; k++) {
                if (L[i]!=L[j] and L[j]!=L[k] and L[k]!=L[i]) {
                    if (L[i]+L[j]>L[k] and L[j]+L[k]>L[i] and L[k]+L[i]>L[j]) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;
}