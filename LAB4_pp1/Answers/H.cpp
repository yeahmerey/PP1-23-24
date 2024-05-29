#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    int a[n][m];
    int rows[n] ;
    //input
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        rows[i] = 0 ; ;
        for(int j = 0; j < m ; j++){
            rows[i]+=a[i][j];
        }
    }
    int  min = 1000000 , nax = 0 ;
    for(int i = 0 ;i < n ; i++){
        if(rows[i] < min){
            min = rows[i];
        }
    }
    for(int i = 0 ; i < n ; i ++){
        if(min == rows[i]){
            nax += i ;
            break;

        }
    }
    cout << nax+1;
    return 0 ;
}