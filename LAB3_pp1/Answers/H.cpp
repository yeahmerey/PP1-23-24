#include <bits/stdc++.h>
using namespace std;
int main(){
    long n , l , r ;
    long sum = 0 ;
    cin >> n >> l >> r;
    int a[n];

    //output

    for(int i = 0 ; i <  n ; i++){
        cin >> a[i];
    }

    //edit


    for(int i = 0 ; i < n ; i++) {
        if (n == l && l == r) {
            sum+=a[n-1];
        }
        else {
            for (int i = l - 1; i <= r - 1; i++ ) {
                sum+=a[i];
            }
        }
        cout << sum;
        return 0;
    }
}