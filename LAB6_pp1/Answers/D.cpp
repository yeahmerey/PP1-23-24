#include <bits/stdc++.h>
using namespace std;
void func(int n , int a[] ,int b){
    int counter = 0 ;
    for(int i = 0 ; i< n ;i++){

        if(a[i]==b){
            counter++;
            break;
        }
    }
    if(counter > 0 ){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
int main(){
    int n ;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int b;
    cin >> b ;
    func(n , a , b );

    return 0 ;
}