#include <bits/stdc++.h>
using namespace std;
string qwerty(string s) {
    string t = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        t += s[i];
    }
    if (s == t) {
        return "Yes";
    } else {
        return "No";
    }
}


int main(){
    string s;
    cin >> s;
    cout << qwerty(s);
    return 0 ;
}