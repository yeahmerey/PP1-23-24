#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int m ;
    cin >> m;
    int b[m];
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
    }
    int c[n + m ];
    for(int i = 0 ; i < n ; i++){
        c[i]= a[i] ;
    }
    for(int i = 0 ; i < m ; i++){
        c[i+n]=b[i];
    }
    sort(c , c + n+ m);
    for(int i = 0 ; i< n+m ; i++){
        cout << c[i] << " ";
    }
    return 0;
}