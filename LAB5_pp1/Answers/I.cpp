#include <bits/stdc++.h>
using namespace std;
int main(){
    string s , t ;
    cin >> s >> t ;
    int sum1 =0; int sum2 = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        sum1+=int(s[i]);
    }
    for(int j = 0;  j < t.size() ; j++){
        sum2+=int(t[j]);
    }
    if(sum1==sum2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }


    return 0 ;
}