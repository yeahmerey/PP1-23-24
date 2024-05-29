#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m  ;
    cin >> n >> m  ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int count = 0 ;
    for(int i = 0 ; i < n  ; i++){
        if(a[i]>=2){
            count++;
        }
    }
    if(count >m){
        cout << "cheater";
    }
    else{
        cout << "no";
    }

}
