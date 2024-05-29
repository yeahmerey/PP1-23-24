#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m , c = 0;
    cin >> n >> m ;
    int a[1000][1000];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] < 0 ){
                c++;
            }
        }
    }
    cout << c;

    return 0 ;
}