#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int size ; cin >> size;
    vector <int> vec(size);
    for(int i = 0 ; i < size ; ++i){
        cin >> vec[i] ;
    }
    int ind , num ; cin >> ind >> num ;
    vector <int>::iterator it = vec.begin();
    vec.insert(it+ind , num);

    for(auto it = vec.begin() ; it != vec.end() ; it++){
        cout << *it << " ";
    }

    return 0 ;
}