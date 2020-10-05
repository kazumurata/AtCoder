#include <bits/stdc++.h>          
using namespace std;               

int main() {
    char alpha;
    cin >> alpha;
    vector<char> S;
    vector<char> L;
    S = {'a','b','c','d','e','f','g','h','i',
         'j', 'k','l','m','n','o','p','q','r',
         's','t','u','v','w','x','y','z'};
    L = {'A','B','C','D','E','F','G','H','I',
         'J','K','L','M','N','O','P','Q','R',
         'S','T','U','V','W','X','Y','Z'};
    for (int i=0; i<26; i++) {
        if (alpha == S.at(i)) {
            cout << 'a' << endl;
            exit(0);
        }
        else if (alpha == L.at(i)) {
            cout << 'A' << endl;
            exit(0);
        }
    }
}