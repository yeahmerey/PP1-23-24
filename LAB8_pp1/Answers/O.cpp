#include <bits/stdc++.h>
using namespace std;
int main(){
    string t ; cin >> t ; set <char> b;
    for(int i = 0 ; i < t.size() ; i ++ ){
        b.insert(tolower(t[i]));
    }
    cout << b.size() <<endl;
    for(auto it = b.begin() ; it!=b.end() ; it++){
        cout << *it << " ";
    }
    return 0 ;
}