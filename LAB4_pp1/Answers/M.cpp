#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int a[n][n];

    int cnt = 1;
    int x = 0 , y = n - 1 ;

    while(x <= y ){
        for(int j = x ; j <= y ; j++){
            a[x][j] = cnt++;
        }

        for(int i = x+1 ; i <= y ; i++){
            a[i][y] = cnt++;
        }

        for(int j = y-1 ; j>=x ; j--){
            a[y][j] =cnt++;
        }

        for(int i = y-1 ; i >x ; i--){
            a[i][x] = cnt++;
        }
        x++;
        y--;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<< a[i][j] << " ";
        }
        cout << endl;
    }





    return 0 ;