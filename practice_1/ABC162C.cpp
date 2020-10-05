#include <bits/stdc++.h>          
using namespace std;               

int gcd(int a, int b, int c) {
    if (a==1 and b==1 and c==1) {
        return 1;
    }
    int minimum = min(min(a,b),c);
    int ans;
    for (int i=1; i<=minimum; i++) {
        if (a%i==0 and b%i==0 and c%i==0) {
            ans = i;
        }
    }
    return ans;
}

int sum_gcd(int x) {
    if (x == 1) {
        return 1;
    }
    long long ans = 0;
    for (int i=1; i<x; i++) {
        ans += 3*gcd(i,x,x);
        for (int j=1; j<x; j++) {
            ans += 3*gcd(i,j,x);
        }
    }
    ans += x;
    return ans;
}

int main() {
    int K;
    cin >> K;
    
    vector<long long> A(K);
    A[0] = 1;

    if (K==1) {
        cout << 1 << endl;
        exit(0);
    }

    for (int i=1; i<K; i++) {
        A[i] = A[i-1] + sum_gcd(i+1);
    }

    cout << A[K-1] << endl;
}