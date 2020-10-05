#include <bits/stdc++.h>          
using namespace std;               

int main() {

    string S;
    cin >> S;
    string str1 = "maerd";
    string str2 = "remaerd";
    string str3 = "esare";
    string str4 = "resare";
    reverse(S.begin(),S.end());

    while (true) {
        if (S.empty()==1) {
            break;
        }
        else if (S.size()<6) {
            cout << "No" << endl;
            exit(0);
        }
        else {
            if (S.erase(6) == str1 or S.erase(6) == str3) {
                S = S.substr(6);
            }
            else if (S.erase(7) == str4) {
                S = S.substr(7);
            }
            else if (S.erase(8) == str2) {
                S = S.substr(8);
            }
            else {
                cout << "No" << endl;
                exit(0);
            }
        }
    }
    cout << "Yes" << endl;
}