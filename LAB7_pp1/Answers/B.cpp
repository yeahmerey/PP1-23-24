#include <bits/stdc++.h>
using namespace std;
void f(int t){
    int c = t / 2;
    if(t!=1){
        f(c);
    }
    cout << t-c*2;
}
int main(){
    int n ;
    cin >> n ;
    f(n);
}