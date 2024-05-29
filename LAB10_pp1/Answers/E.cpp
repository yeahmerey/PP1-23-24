#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >>n;
    map <string ,double> mp;
    int all = 0;
    for (int i=0;i<n; i++) {
        int m; cin >> m;
        for(int j = 0; j < m; j++){
            string city; double peps;
            cin >> city >> peps;
            all += peps;
            mp[city] += peps;
        }
    }
    for(auto it : mp){
        cout << it.first << " " << it.second * 100/ all<< endl;
    }
    return 0;
}