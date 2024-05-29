#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    vector <int> a(n);
    for(int i = 0 ; i < n  ; i++){
        cin >> a[i];
    }
    int m ; cin >> m ;int count = 0 ;
    for(int i = 0; i < n ; i++){
        if(m==a[i]){
            count ++ ;
        }
    }
    if(count > 0 ){
        cout << "Yes";
    }
    else{
        cout << "No";
    }




    return 0  ;
}