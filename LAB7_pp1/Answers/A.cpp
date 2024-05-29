#include <bits/stdc++.h>
using namespace std;
int powerOf2(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 2 * powerOf2(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    int result = powerOf2(n);
    cout << result ;

    return 0;
}