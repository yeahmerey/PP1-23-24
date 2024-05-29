#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    int b[n];
    set <int> a;
    for(int i = 0 ; i < n ; i ++ ){
        cin >> b[i];
        a.insert(b[i]);
    }
    int sum = 0 ;
    for(auto it = a.begin(); it != a.end() ; it++  ){
        sum+=*it;

    }
    cout << sum ;

    return 0 ;
}