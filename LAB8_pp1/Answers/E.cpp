#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int size ; cin >> size;
    vector <int> vec(size);
    for(int i = 0 ; i < size ; ++i){
        cin >> vec[i] ;
    }
    int begin , end ; cin >> begin >> end ;
    vector <int>::iterator it = vec.begin();
    vector <int>::iterator it2 = vec.begin();
    advance (it , begin);
    advance (it2 , end);
    vec.erase(it , it2+1);
    for(auto it = vec.begin() ; it != vec.end() ; it++){
        cout << *it << " ";
    }

    return 0 ;
}