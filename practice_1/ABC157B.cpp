#include <bits/stdc++.h>          
using namespace std;               

int main() {
    vector<vector<int>> A(3,vector<int>(3));
    for (int i=0; i<3; i++) {
        cin >> A.at(i).at(0) >> A.at(i).at(1) >> A.at(i).at(2); 
    }
    int N;
    cin >> N;
    vector<int> b(N);
    for (int i=0; i<N; i++) {
        cin >> b[i];
    }


    string ans = "No";
    for (int k=0; k<N; k++) {
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (b[k]==A.at(i).at(j)) {
                    A.at(i).at(j) = 0;
                }
            }
        }
        if (A.at(0).at(0)==0 and A.at(0).at(1)==0 and A.at(0).at(2)==0) {
            ans = "Yes";
            break;
        }
        else if (A.at(1).at(0)==0 and A.at(1).at(1)==0 and A.at(1).at(2)==0) {
            ans = "Yes";
            break;
        }
        else if (A.at(2).at(0)==0 and A.at(2).at(1)==0 and A.at(2).at(2)==0) {
            ans = "Yes";
            break;
        }
        else if (A.at(0).at(0)==0 and A.at(1).at(0)==0 and A.at(2).at(0)==0) {
            ans = "Yes";
            break;
        }
        else if (A.at(0).at(1)==0 and A.at(1).at(1)==0 and A.at(2).at(1)==0) {
            ans = "Yes";
            break;
        }
        else if (A.at(0).at(2)==0 and A.at(1).at(2)==0 and A.at(2).at(2)==0) {
            ans = "Yes";
            break;
        }
        else if (A.at(0).at(0)==0 and A.at(1).at(1)==0 and A.at(2).at(2)==0) {
            ans = "Yes";
            break;
        }
        else if (A.at(0).at(2)==0 and A.at(1).at(1)==0 and A.at(2).at(0)==0) {
            ans = "Yes";
            break;
        }
    }

    cout << ans << endl;
}
