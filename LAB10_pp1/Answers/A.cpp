#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; int a[n] ;
    vector <string> name(n) ;
    vector <int> z(n) ;
    for(int i = 0; i < n ; i++){
        cin >> name[i] ;
        cin >> z[i] ;
    }
    sort(name.begin() , name.end()) ;
    sort(z.begin() , z.end()) ;
    for(int i = 0 ;i < n ; i++){
        cout << name[i] << " " << z[i] <<endl ;
    }
    return 0 ;
}