#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ; pair <int ,int> p[n] ;
    for(int i = 0 ; i < n ; i ++){
        int x , y ;
        cin >> x >> y ;
        p[i] = make_pair(x+y , i+1);
    }
    sort(p , p+n);
    for(int i = 0; i < n ; i++){
        cout << p[i].second <<" ";
    }
    return 0 ;
}