#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    getline(cin , s);
    string t ="";
    for(int i = 0 ; i < s.size() ; i++){
        if(int(s[i]) !=  65 and int(s[i]) != 69 and int(s[i])!=73 and int(s[i])!=79 and int(s[i])!=85  and int(s[i])!=97 and int(s[i])!=101 and int(s[i])!=105 and int(s[i])!=111 and int(s[i])!=117 ){
            t+=s[i];
        }
    }
    cout << t;



    return 0 ;
}