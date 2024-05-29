#include <bits/stdc++.h>
using namespace std;
long sum(string n){
    int sum = 0 ;
    for(int i = 0 ; i < n.size() ; i++){
        sum+=n[i]-48;
    }
    return sum ;
}
int main(){
    string n ;
    cin >> n ;
    cout << sum(n) ;
    return 0 ;
}