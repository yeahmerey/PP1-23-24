#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool status;
    cin >> n ;
    for(int i = 2; i <=n ; i++){
        status = true;
        for(int j = 2; j < i; j++){
            if(i%j != 0 or i == j ){
                status = true;
            }
            else{
                status = false;
                break;
            }
        }
        if (status){
            cout << i << " is prime" << endl ;
        }

    }



    return 0 ;
}