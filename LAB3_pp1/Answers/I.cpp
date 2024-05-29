#include <bits/stdc++.h>
using namespace std;
int main() {
    long n , l , r;
    cin >> n >> l >> r;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < l-1 ; i++) {
        cout << a[i] <<  " ";
    }
    for(int i = r-1 ; i >=l-1  ; i--) {
        cout << a[i]<< " ";
    }
    for(int i = r ; i < n ; i++){
        cout <<a[i] << " ";
    }

    return 0 ;
}