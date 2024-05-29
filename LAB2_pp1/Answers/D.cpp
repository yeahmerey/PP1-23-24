#include<iostream>
using namespace std;

int main(){
    int n , k , q, u;
    cin >> n >> k ;
    if (n < k) {
        cout << 2;
    }
    else if ( k==2 && k<n ){
        cout << n;

    }
    else {
        q = n / k;
        u = 2 + q * 2 ;
        cout << u;
    }
    return 0  ;
}