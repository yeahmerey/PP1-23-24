#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1){cout<<1;}
    else{
        for(int  i = 0; i <= n ; i++){
            if(pow(2,i)<=n){
                cout<<pow(2,i)<< " ";
            }
            else{break;
            }
        }
    }


    return 0;
}