#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maximum;
    for( int  i = 0 ; i  <  n ; i++){
        int num;
        cin >> num;
        if ( num > maximum ){
            maximum = num ;
        }
    }
    cout<< maximum;
    return 0;
}