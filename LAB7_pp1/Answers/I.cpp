#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0 ;
    int  n ;
    while(cin >> n){
        sum += n;
        if(n==0){
            break;
        }
    }
    cout << sum;


    return 0 ;
}