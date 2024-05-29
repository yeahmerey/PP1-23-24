#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ; cin >> s; deque <char> d;
    for(int i = 0 ; i < s.size() ; i++){
        if(d.empty()){
            d.push_back(s[i]);
        }
        else{
            if(s[i]=='0'){
                d.push_back(s[i]);
            }
            else if(s[i] == '1' && d.back()=='1'){
                d.pop_back();
            }
            else{
                d.push_back(s[i]);
            }
        }
    }
    for(auto it = d.begin() ; it!=d.end() ; it++){
        cout << *it ;
    }
}