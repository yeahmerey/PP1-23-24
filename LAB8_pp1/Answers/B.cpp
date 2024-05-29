#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    vector <int> a(n);
    for(int i = 0 ; i < a.size() ; i++){
        cin >> a[i] ;
    }
    for(int i = a.size()-1 ; i >= 0 ; i--)
    {
        cout << a[i] << " " ;
    }
    return 0 ;
}