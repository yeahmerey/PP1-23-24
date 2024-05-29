#include <bits/stdc++.h>
using namespace std;
double long procent(double a , double b ){
    return (b*100)/a;
}


int main(){
    double n ; double m ;
    cin >> n >> m ;
    cout << procent(n , m);
    return 0 ;
}