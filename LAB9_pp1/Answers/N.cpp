#include <iostream>
#include <map>
using namespace std;
const long long mx = 10e5;
int main(){
    int n;
    cin>>n;
    int d[n];
    map<int, int>all;
    bool in[mx] = {false};
    for(int i=0; i<n; i++){
        cin>>d[i];
        in[d[i]] = true;
        for(int j=0; j<i; j++){
            all[(d[j]^d[i])]++;
        }
    }
    int res=0;
    for(auto it:all){
        if(in[it.first]) res+=(it.second);
    }
    cout<<res;
}