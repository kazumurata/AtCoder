#include <bits/stdc++.h>          
using namespace std;               

int main() {
    string S,T;
    cin >> S;
    cin >> T;
    int s = S.size();
    int t = T.size();
    
    vector<int> vec(s-t+1);
    int N = vec.size();
    for (int i=0; i<N; i++) {
        int count = 0;
        for (int j=0; j<t; j++) {
            if (S.at(i+j) != T.at(j)) {
                count++;
            }
        }
        vec.at(i) = count;
    }
    sort(vec.begin(),vec.end());
    cout << vec.at(0) << endl;
}