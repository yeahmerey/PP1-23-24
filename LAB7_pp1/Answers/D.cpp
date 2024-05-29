#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long sum = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        sum += s[i]-48;
    }
    cout << sum ;
    return 0 ;
}