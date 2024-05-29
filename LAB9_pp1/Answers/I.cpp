#include <bits/stdc++.h>
using namespace std;
int main() {
    set<string> a;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string login;
        cin >> login;

        if (a.count(login) == 0) {
            a.insert(login);
            cout << "new user added" <<endl;
        } else {
            std::cout << "user already exists" << endl;
        }
    }

    return 0;
}