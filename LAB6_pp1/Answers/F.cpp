#include <bits/stdc++.h>
using namespace std;

void func(string s , int  n ){
    int c = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]-48 >= 0 && s[i]-48 <= 9 ){
            c++;
        }
    }
    if(c>=n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n ;
    func(s , n );
    return 0  ;
}
