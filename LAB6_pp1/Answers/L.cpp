#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int n;
    cin >> s;
    cin >> n ;

    int count = 0;
    bool ans = false;

    for (char c : s) {
        if (isdigit(c)) {
            count++;
            if (count >= n) {
                ans = true;
                break;
            }
        } else {
            count = 0;
        }
    }

    if (ans) {
        cout << "Valid";
    } else{
        cout << "Not valid";
    }

    return 0;
}