#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    int sum = 0;
    int avg;

    for(int i=0; i<N; i++) {
        cin >> vec.at(i);
        sum += vec.at(i);
    }

    avg = sum/N;

    for (int j=0; j<N; j++) {
        cout << abs(vec.at(j) - avg) << endl;
    }
}