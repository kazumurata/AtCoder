#include <bits/stdc++.h>          
using namespace std;               

int main() {

    //input
    int N, S;
    cin >> N >> S;

    vector<int> A(N);
    vector<int> P(N);
    for (int i=0; i<N; i++) {
        cin >> A.at(i);
    }
    for (int i=0; i<N; i++) {
        cin >> P.at(i);
    }

    //calculate
    int count = 0;
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (A.at(i)+P.at(j)==S) { //AiとPjの和がSだったとき、countが1増える
                count++;
            }
        }
    }

    //output
    cout << count << endl;
}