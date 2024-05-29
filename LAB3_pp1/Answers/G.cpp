#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        a.push_back(e);

    }
    int minel = a[0];
    int maxel = a[0];
    for(int i = 1 ; i < n ; i++){
        if(a[i] < minel){
            minel=a[i];
        }
        if(a[i]>maxel){
            maxel = a[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i] == maxel){
            a[i]=minel;
        }
    }
    for(int i = 0 ; i < n ; ++i){
        cout << a[i] << " ";
    }
    return 0 ;
}