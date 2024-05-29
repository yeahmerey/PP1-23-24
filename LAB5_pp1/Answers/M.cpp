#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    char n ;
    int t;
    int c=0;
    cin >> s >> n >> t;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]==n){
            c++;
        }
    }
    if(t==c){
        cout<<"YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}