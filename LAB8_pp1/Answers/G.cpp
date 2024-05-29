#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    vector <int> a(n);
    for(int i = 0 ; i < a.size() ; i++){
        cin >> a[i] ;
    }
    int b , c ; cin >> b >> c; int k = c - b ;
    for(int i = 0 ; i< n ; i++){
        if(i == b && b+k == c){
            reverse(a.begin()+b , a.begin()+c+1);
        }
    }
    for(int i = 0 ; i < a.size() ; i++){
        cout << a[i] << " ";
    }

    return 0  ;
}