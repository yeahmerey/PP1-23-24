#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n ;
    map<string , int > m ;
    for(int i = 0 ; i < n ; i++){
        string s;
        int a ;
        cin >> s >> a ;
        if(m.find(s) == m.end()){
            m[s] = a ;
        }
        else{
            m[s] +=a;
        }
    }
    for(map<string , int>::iterator it = m.begin() ; it!= m.end() ;it++){
        cout << it ->first << " " << it->second << endl ;
    }
    return 0 ;
}