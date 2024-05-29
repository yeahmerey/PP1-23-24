#include <bits/stdc++.h>
using namespace std;
int qwerty(string s){
    int max = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]-48 > max){
            max = s[i]-48;
        }
    }
    return max;
}

int main(){
    string s;
    cin >> s;
    cout << qwerty(s);
    return 0 ;
}