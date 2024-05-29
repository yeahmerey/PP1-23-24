#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m  ;
    int a[n];

    //input

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    //edit

    for(int i = 0 ; i < n ; i++){
        if(m==a[i]){
            cout << i ;
            break;
        }
        else{
            if(m>=a[i] && m <=a[i+1]){
                cout << i+1;
                break;

            }
            else{
                if(a[n-1]<=m){
                    cout << n ;
                    break;
                }
            }

        }
    }

    return 0 ;
}