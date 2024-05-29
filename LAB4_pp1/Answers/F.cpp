#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int a[100][100];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    int max=a[0][0];
    int ik = 0 , jk = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(a[i][j]>max){
                max=a[i][j];
                ik=i ;
                jk = j;

            }
        }
    }
    cout << ik+1 << " " << jk+1;
    return 0 ;
}