#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; int a[n] ;
    for(int  i = 0 ; i < n ; i ++){
        cin >> a[i ] ;
    } vector <int> b ; vector <int> c;
    for(int i = 0 ; i < n ; i ++){
        if(a[i]%2==0){
            b.push_back(a[i]) ;
        }
        else{
            c.push_back(a[i]) ;
        }
    }
    sort(b.begin() , b.end());
    sort(c.begin() , c.end());
    for(int i = b.size()-1 ; i >= 0 ; i--){
        cout << b[i] << " ";
    }
    for(int i = 0 ; i < c.size() ; i++){
        cout << c[i] << " ";
    }

    return 0  ;
}