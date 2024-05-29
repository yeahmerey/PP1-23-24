#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int m ;
    cin >> m;
    int c = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(a[i]==m){
            c++;
        }
    }
    if(c>0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}