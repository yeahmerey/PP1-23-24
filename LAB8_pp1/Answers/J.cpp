#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    vector <int> a(n);
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    int max = -1000; int min = 1000;
    for(int i = 0 ; i< n ; i++){
        if(a[i]>max){
            max= a[i];
        }
        if(a[i]< min){
            min = a[i];
        }
    }
    cout << max - min;


    return 0 ;
}
