#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int sizeofarr ; cin >> sizeofarr;
    vector <int> vector(sizeofarr);
    for(int i = 0 ; i < sizeofarr ; i++){
        cin >> vector[i] ;
    }
    int eraser ; cin >> eraser ;
    auto itErase = vector.begin();
    advance(itErase , eraser);
    vector.erase(itErase);
    for(auto it = vector.begin() ; it!=vector.end() ; it++){
        cout << *it << " ";
    }
    return 0 ;
}