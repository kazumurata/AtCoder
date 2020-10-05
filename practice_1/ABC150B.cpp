#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<char> s(N);
    for (int i=0; i<N; i++) {
        s.at(i) = S.at(i);
    }
    int count = 0;
    for (int i=0; i<N-2; i++) {
        if (s.at(i) == 'A' and s.at(i+1) == 'B' and s.at(i+2) == 'C') {
            count++;
        }
    }
    cout << count << endl;
}