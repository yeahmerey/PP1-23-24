#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if( n>0 && n%2==0){
        cout<<"Even";
    }
    else if( n>0 && n%2==1){
        cout<<"Odd";
    }
    else{cout<<"None";}

}