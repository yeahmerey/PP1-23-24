#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , max = 0 ; ;
    cin >> n ;
    int a[100][100];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            if(a[i][j]>max){
                max = a[i][j];
            }
        }
    }
    cout << max;
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j  < n ; j++){
    //         cout << a[i][j] << " ";

    //     }
    //     cout << endl;
    // }
    return 0 ;
}