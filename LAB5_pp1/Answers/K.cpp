#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int c=0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]=='a' or s[i]=='e' or s[i]=='u' or s[i]=='o' or s[i]=='i'){
            c++;
        }
    }

    cout <<c;
    return 0;
}