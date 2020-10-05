#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N,M;

    cin >> N;
    vector<string> blue(N);
    
    for (int i=0; i<N; i++) {
        cin >> blue.at(i);
    }

    cin >> M;
    vector<string> red(M);
    for (int i=0; i<M; i++) {
        cin >> red.at(i);
    }

    vector<int> S(N,1);
    for (int i=0; i<N; i++) {
        for(int j=i+1; j<N-i; j++){
            if(blue.at(i)==blue.at(j)) {
                S.at(i)++;
            }
        }
        for(int j=0; j<M; j++)
            if(blue.at(i)==red.at(j)) {
                S.at(i)--;
            }
    }

    int X = S.at(0);
    for(int i=0; i<N-1; i++) {
        if(X<S.at(i+1)) {
            X=S.at(i+1);
        }
    }
    cout << X << endl;
}