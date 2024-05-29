#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    for(auto c:s){
        if(c>=97 && c<=120){
            c-=32;
            char h = char(c);
            cout << char(c) ;
        }
        else{
            cout << c;
        }
    }




    return 0 ;
}