#include <bits/stdc++.h>
using namespace std;
void CapitalEven(string s){
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]>=97 and s[i]<=122) {
            if (i % 2 == 0 or i == 0) {
                s[i] = char(int(s[i]) - 32);
            }
        }
        else{
            continue;
        }
    }
    cout << s;
}
int main(){
    string s;
    cin >> s;
    CapitalEven(s);

    return 0 ;
}