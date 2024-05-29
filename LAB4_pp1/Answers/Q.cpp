#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    int t = 0 ; t =  n*2-1 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < t ; j++) {
            if (i + j <  n-1 or i+n<=j  ){
                cout << ".";
            }
            else{
                cout << "*";
            }
        }
        cout << endl ;
    }


    return 0 ;
}