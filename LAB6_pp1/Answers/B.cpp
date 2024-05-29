#include <bits/stdc++.h>
using namespace std;
void darynindusideaaitkan(int n , int a[] , int b[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] - b[i] > 0) {
            cout << a[i] - b[i] << " ";
        } else {

            cout << (a[i] - b[i])*-1 << " ";
        }
    }
}
int main(){
    int n ;
    cin >> n ;
    int a[n];
    int b[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin >> b[i];
    }
    darynindusideaaitkan(n , a , b);
    return 0 ;
}