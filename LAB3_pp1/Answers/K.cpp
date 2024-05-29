#include <iostream>
#include <cmath>
#include <array>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int b;
    for (int i = 0 ; i < n ;i++ ) {
        cin >> b;
        a[i] = b;
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i]!=a[i+1]) {
            cout << a[i] << " ";
        }


    }
    return 0;
}