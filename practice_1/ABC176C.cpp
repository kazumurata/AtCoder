#include <bits/stdc++.h>          
using namespace std;               

int main() {
    long long N;
    cin >> N;
    vector<long long> A(N);
    for (long long i=0; i<N; i++) {
        cin >> A.at(i);
    }

    long long count = 0; //踏み台高さ；
    for (long long i=1; i<N; i++) {
        if (A.at(i) < A.at(i-1)) {
            count += A.at(i-1)-A.at(i);
            A.at(i) = A.at(i-1);
        }
    }

    cout << count << endl;
}