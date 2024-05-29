#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool status = false;
    if(s.size()==2){
        cout<< "YES";
    }
    else {
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[s.size() - 1] != s[i]) {
                status = false;
            } else {
                status = true;
            }
        }
        if (status) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
    return 0 ;
}