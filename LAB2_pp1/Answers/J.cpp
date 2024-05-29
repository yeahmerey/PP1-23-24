#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int cz=0;
    for (int i=0 ; i< n;i++){
        int a;
        cin >>a;
        int count = 0;
        int b=a;

        while (b > 0) {
            if (b % 10 == 0) {
                count++;
            }
            b /= 10;

        }
        cz+=count;
    }
    cout<< cz ;
    return 0 ;
}