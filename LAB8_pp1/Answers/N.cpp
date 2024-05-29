#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    vector <int> a(n);
    for(int i = 0 ; i < a.size() ; i++){
        cin >> a[i];
    }
    set <int> b;
    for(int i = 0 ; i < a.size() ; i++){
        if(a[i]%2!=0)
        {
            b.insert(a[i]);
        }
    }
    for(auto &item : b ){
        cout << item << " ";
    }



    return 0 ;
}