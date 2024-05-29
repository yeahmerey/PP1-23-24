#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; vector <int> a(n) ;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i] ;
    }
    map <int, int> b;
    for(int num : a){
        b[num]++ ;
    }
    int cnt = 0 ;
    for(auto& c : b ){
        if(c.second>=2) {
            cnt++;
        }
    }
    cout << cnt ;
    return 0 ;
}