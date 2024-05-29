#include <bits/stdc++.h>
using namespace std;
long double gipo(double a , double b){
    double c ;
    c = sqrt(a*a+b*b);
    return c;
}
int main(){
    double a;
    cin >> a;
    double b ;
    cin >> b ;

    cout << setprecision(4)<< gipo(a,b);
    return 0 ;
}