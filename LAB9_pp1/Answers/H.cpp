#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; vector <string> a(n) ;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i] ;
    }
    map <string, int> b;
    for(int i = 0 ; i < n ; i++){
        if(b.find(a[i]) == b.end()){
            b[a[i]]= i + 1;
        }
    }
    for(auto i = b.begin() ; i != b.end() ; i++ ){
        cout << i->first << " " << i->second << endl ;
    }
    return 0 ;
}