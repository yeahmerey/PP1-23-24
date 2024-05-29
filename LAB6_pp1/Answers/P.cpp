#include <bits/stdc++.h>
using namespace std;
long double minesorplus(double n){
    if(n<0){
        return n+(n*-2);
    }
    else{
        return n;
    }
}
int main(){
    double a;
    cin>> a;
    cout << minesorplus(a);

    return 0 ;
}