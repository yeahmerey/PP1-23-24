#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin >> s;
    char n;
    n=s[0];
    for(int i = 0 ; i < s.size() ; i++) {
        if (n < s[i]){
            n=s[i];
        }
    }
    cout << n ;
}