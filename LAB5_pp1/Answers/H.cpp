#include <bits/stdc++.h>
using namespace std;
int main(){
    set<char> uni ;
    string s;
    cin >> s;
    int n = 0 ;int s1=0; int s2=0;
    for(char c : s){
        uni.insert(c);
    }
    for(char c:uni){
        s2+=int(c);
        n+=c;
    }
    for(int i = 0 ; i < s.size() ; i++){
        s1+=int(s[i]);
    }
    if(s1%s2==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    //for(int i = 0 ;  i<n.size() )
    return 0 ;
}