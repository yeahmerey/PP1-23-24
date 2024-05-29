#include <bits/stdc++.h>
using namespace std;
char toUpper(char s){
    if(s>=65 and s<=90 ){
        return s;
    }
    else{
        return s-32;
    }
}
int main(){
    char t;
    cin >> t ;
    cout << toUpper(t);

    return 0 ;
}