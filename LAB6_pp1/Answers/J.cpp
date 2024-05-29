#include <bits/stdc++.h>
using namespace std;
void max(int a[]  ){
    int m = a[0];
    for(int i = 0; i < 4 ;i++){
        if(a[i]>m){
            m = a[i];
        }
    }
    cout << m;

}
int main(){
    int a[4];
    for(int i = 0 ; i< 4 ; i++){
        cin >> a[i];
    }
    max(a);
    return 0 ;
}