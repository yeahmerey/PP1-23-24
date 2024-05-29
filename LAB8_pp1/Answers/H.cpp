#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n;
    vector <int> a(n);
    for(int i = 0 ; i < a.size() ; i++){
        cin >> a[i] ;
    }
    int m ; cin >> m ;
    sort(a.begin() , a.end());
    vector <int> ans(m) ;
    for(int i = 0 ; i < a.size() ; i++){
        if(i < m ){
            ans.push_back(a[i]);
        }
    }
    for(int i = 0 ; i < ans.size() ; i ++){
        if(ans[i]!=0) {
            cout << ans[i] << " ";
        }
    }
    return 0 ;
}