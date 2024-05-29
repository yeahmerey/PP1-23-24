#include <bits/stdc++.h>
using namespace std;
int fac(int n){
    int sum = 1 ;
    for(int i = 2 ; i <= n ; i++){
        sum*=i;
    }
    return sum;
}

int main(){
    int n ;
    cin >> n ;
    cout << fac(n);
    return 0 ;
}