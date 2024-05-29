#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    string a[n][n];
    int d=n-1;
    string c="1";

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(j==d){
                a[i][j] = c ;
                int c_int = stoi(c);
                c_int++;
                c=to_string(c_int);
            }
            else{
                a[i][j] = '.';
            }
        }
        d--;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << a[i][j];
        }
        cout << endl;
    }



    return 0 ;
}
