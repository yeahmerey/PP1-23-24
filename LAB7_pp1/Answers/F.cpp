#include <bits/stdc++.h>
using namespace std;
int Even(string s){
    int c = 0 ;
    for(int i = 0; i < s.size() ; i++){
        if((s[i]-48)%2==0){
            c++;
        }
    }
    return c;
}
int main(){
    string t ;
    cin >> t ;
    cout << Even(t);

    return 0 ;
}