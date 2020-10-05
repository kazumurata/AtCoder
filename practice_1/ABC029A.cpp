#include <bits/stdc++.h>          
using namespace std;               

int main() {
    int N;
    cin >> N;
    vector<int> t(N);
    for (int i=0; i<N; i++) {
        cin >> t.at(i);
    }
    
    int count1 = 0;
    int count2 = 0;
    for (int i=0; i<N; i++) {
        if (i%2 == 0) {
            count1 += t_new.at(i);
        }
        else {
            count2 += t_new.at(i);
        }
    }
    cout << max(count1,count2) << endl;
}