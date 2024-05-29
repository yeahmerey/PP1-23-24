#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n  ;map<string ,string> m ;
    for(int i = 0 ; i < n ; i++){
        string log ; cin >> log ; cin>>m[log];
    }
    int a ; cin  >> a;
    for(int i = 0 ; i < a ; i++){
        string logg ,pass ;
        cin >> logg >> pass ;
        if (m.find(logg) == m.end()){
            cout << "login error" << endl ;
            continue;
        }
        if(m[logg] != pass){
            cout << "password error"<<endl ;
            continue;
        }
        else{
            cout << "correct password" <<endl ;
        }


    }
    return 0;
}