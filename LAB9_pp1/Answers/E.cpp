#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; vector <string> a(n) ;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i] ;
    }
    map <string, int> b;
    for(string num : a){
        b[num]++ ;
    }
    int cnt = 0 ;
    for(auto& c : b ){
        if(c.second==3) {
            cnt++;
        }
    }
    cout << cnt ;
    return 0 ;
}