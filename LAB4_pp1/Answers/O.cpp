#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int a[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    int max=-100000 ;
    int b = 0 , c = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i==j){
                if(a[i][j]>max){
                    max = a[i][j];
                    b += i  ;
                    c += j ;
                    break;
                }

            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << b+1 << ";" << c+1;

    return 0 ;
}