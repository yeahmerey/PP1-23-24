#include <bits/stdc++.h>
using namespace std;
void func(string s){
    int n ;
    int c = 0 ;
    for(int i = 0 ;i < s.size() ; i++){
        n = s.size();
        if(s[i]-48 == 0 or s[i]-48 == 2 or s[i]-48 == 4 or s[i]-48 == 6 or s[i]-48==8 ){
            c++;
        }
    }
    if(n==c){
        cout << "Valid";
    }
    else{
        cout << "Not valid";
    }
}
int main(){
    string s;
    cin >> s;
    func(s);
    return 0 ;
}