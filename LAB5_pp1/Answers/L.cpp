#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char n = s[0];
    bool status = true;
    for(int i = 0 ; i < s.size() ; i++){
        if( n<=s[i]){
            status = true ;
            n=s[i];
        }
        else{status=false;
            break;}
    }
    if(status){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;