#include <bits/stdc++.h>          
using namespace std;               

int N_doc(vector<vector<int>> &children, int x) {

    //
    if (children.at(x).size() == 0) {
        return 1;
    }

    //
    int count = 1;
    for (int i=0; i<children.at(x).size(); i++) {
        count += N_doc(children, i);
    }
    return count;
}

int main() {

    //
    int N;
    cin >> N;
    vector<int> p(N-1);
    for (int i=0; i<N-1; i++) {
        cin >> p[i];
    }

    //
    vector<vector<int>> children(N);
    for (int i=0; i<N-1; i++) {
        children.at(p[i]).push_back(i+1);
    }

    //
    for (int i=0; i<N; i++) {
        cout << N_doc(children, i) << endl;
    }
}