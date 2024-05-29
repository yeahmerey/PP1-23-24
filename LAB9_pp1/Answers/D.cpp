#include <iostream>
using namespace std;
int main(){
    int n ; int m ; cin >> n >> m ; int a[n];
    for(int i = 0 ; i < n  ; i++){
        cin >> a[i];
    }
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(a[i]==m ){
            count++ ;
        }
    }
    cout << count ;
    return 0 ;

}