#include <bits/stdc++.h>
using namespace std;
#define int long long int

int modpow(int a, int b, int m) { 
    int res = 1 % m;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// Compute S(n) = 1 + a + a^2 + ... + a^n (mod m)
int geomSum(int a, int n, int m) { 
    if (n == 0) return 1 % m;
    if (n % 2 == 1) {
        int half = geomSum(a, n / 2, m);
        int part = (half + modpow(a, n / 2 + 1, m) * half) % m;
        return part;
    } else {
        int prev = geomSum(a, n - 1, m);
        return (prev + modpow(a, n, m)) % m;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, X, M;
    cin >> A >> X >> M;
    cout << geomSum(A, X - 1, M) << "\n";
    return 0;
}
