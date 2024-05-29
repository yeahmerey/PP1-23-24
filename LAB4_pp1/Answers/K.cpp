#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    int a[n][m];
    int rows[n];
    int column[m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        rows[i]=0 ;
        for(int j = 0 ; j < m ; j++){
            rows[i]+=a[i][j];
        }
    }
    for(int j = 0 ; j < m ; j++){
        column[j] = 0 ;
        for(int i = 0 ; i < n ; i++){
            column[j]+=a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << "The sum of row number " << i+1 << " is " << rows[i] << endl;
    }
    for(int j = 0 ; j < m ; j++){
        cout << "The sum of column number " << j+1 << " is "<< column[j] << endl;
    }

    return 0 ;
}