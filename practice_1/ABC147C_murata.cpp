#include <bits/stdc++.h>          
using namespace std;               
typedef long long ll;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<vector<int>> X(N,vector<int>(0));
    vector<vector<int>> Y(N,vector<int>(0));
    int x, y;
    for (int i=0; i<N; i++) {
        cin >> A[i];
        for (int j=0; j<A[i]; j++) {
            cin >> x >> y;
            X[i].push_back(x--);
            Y[i].push_back(y);
        }
    }
    vector<int> judge(N,-1);
    for (int i=0; i<N; i++) {
    }

}