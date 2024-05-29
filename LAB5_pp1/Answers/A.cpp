#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n=0 , m=0 ;

    getline(cin , s);
    for(auto c : s){
        if(c>=65 && c<=90){
            n++;
        }
        else if(c>=97 && c<=122){
            m++;
        }
    }
    cout << m << " " << n ;
    return 0 ;
}