#include <bits/stdc++.h>          
using namespace std;
typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    int A = min(a,b), B = max(a,b);
    for (int i=0; i<B; i++) {
        cout << A;
    }
    cout << endl;
}