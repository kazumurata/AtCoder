#include <bits/stdc++.h>          
using namespace std;   
typedef long long ll;            

int main() {
    int N;
    cin >> N;
    vector<ll> L(N);
    for (int i=0; i<N; i++){
        cin >> L.at(i);
    }

    //
    int count = 0;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (L.at(i) != L.at(j)) {
                for (int k=j+1; k<N; k++) {
                    if (L.at(i) != L.at(k) and L.at(j) != L.at(k)) {
                        if (L.at(i)<L.at(j)+L.at(k) and L.at(j)<L.at(k)+L.at(i) and L.at(k)<L.at(i)+L.at(j))
                        count++;
                    }
                }
            }
        }
    }

    //
    cout << count << endl;
}