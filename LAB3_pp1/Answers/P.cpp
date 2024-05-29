#include <iostream>
#include <cmath>
#include <array>
using namespace std;
int main() {
    double x , n;
    cin >> x;
    n=sqrt(x);
    if(n-int(n)==0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }




    return 0;
}