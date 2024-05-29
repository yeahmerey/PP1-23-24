#include <bits/stdc++.h>
using namespace std;

string lucky(string t){
    int e;
    int sum = 0 ;
    for(int i = 0 ; i < t.size() ; i++){
        sum +=(t[i]) - 48 ;
    }
    e = t[t.size()-1]-48;
    if(sum % e == 0 ){
        return "YES";
    }
    else{
        return "NO";
    }
}
int main(){
    string t;
    cin >> t;
    cout << lucky(t);
    return 0 ;
}