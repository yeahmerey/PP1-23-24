#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ; cin >> s ; stack <char> t ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '('){
            t.push(s[i]) ;
        }
        else{
            if(t.size()== 0 ){
                cout << "NO" ;
                return 0 ;
            }
            t.pop() ;
        }
    }
    if(t.size() == 0 ){cout << "YES" ; }
    else{cout << "NO" ; }
    return 0;
}