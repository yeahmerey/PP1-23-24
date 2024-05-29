#include <bits/stdc++.h>
using namespace std;
int F(int n){
    if(n == 1){
        return 0 ;
    }
    else if(n<2){
        return 1 ;
    }
    else{
        return F(n-1)+F(n-2);
    }
}
int main(){
    int n ;
    cin >> n ;
    cout << F(n);


    return  0 ;
}