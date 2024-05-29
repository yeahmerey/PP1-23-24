#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector <int> a(n);
    set <int> b ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        b.insert(a[i]);
    }
    cout << b.size();

    return 0 ;
}