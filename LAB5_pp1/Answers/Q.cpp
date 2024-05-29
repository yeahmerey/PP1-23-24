#include <bits/stdc++.h>
using namespace std;
int main(){
    string s , t ;
    cin >> s >> t;
    int n=0;
    for(int i = 0 ; i <= s.size() ; i++){
        if(int(s[i])>=97 && int(s[i])<=122){
            n+=int(s[i]);
        }
    }
    int m= 0;
    for(int i = 0 ; i <=t.size() ; i++ ){
        if(int(t[i])>=97 && int(t[i]<=122)){
            m+=int(t[i]);
        }
    }
    if(m%n==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }




    return 0 ;
}