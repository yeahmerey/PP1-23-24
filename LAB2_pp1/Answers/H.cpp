#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ch =0 , nech=0;
    for ( int i = 0; i<n; i++){
        int a;
        cin >> a;
        if(a%2==0){
            ch++;

        }
        else{
            nech++;
        }
    }
    cout<< ch <<" "<< nech;
    return 0;
}