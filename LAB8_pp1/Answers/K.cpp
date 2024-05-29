#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n;
    vector <int> a(n);
    for(int i = 0 ; i < a.size() ; i++){
        cin >> a[i] ;
    }
    int m ; cin >> m ;
    sort(a.begin() , a.end());
    int sum = 0 ;
    for(int i = n-m ; i < n ; i ++){

        sum += a[i];
    }
    cout << sum ;






    return 0 ;
}