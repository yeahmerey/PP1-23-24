#include <bits/stdc++.h>
using namespace std;

int Ans(string n){
    int sum = 0 ;
    for(int i = 0 ;i < n.size() ; i++){
        sum+=(n[i]-48)/2;
    }
    return sum ;
}
int main(){
    string s;
    cin >> s;
    cout << Ans(s);
    return 0 ;
}