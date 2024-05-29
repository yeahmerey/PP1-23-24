#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q ;
    int n ; cin >> n ;

    for(int i = 0 ; i < n ; i ++){
        int a ; string b; cin >> a;
        if(a == 1){
            cin >> b ;
            q.push(b);
            cout << q.front() << endl ;
        }
        if(a == 2){
            if(q.empty()){
                cout << "queue is empty" << endl ;
                continue;
            }
            q.pop();
            if(q.empty()){
                cout << "queue is empty" << endl ;
                continue;
            }
            cout << q.front() <<endl ;
        }
    }
    return 0 ;
}