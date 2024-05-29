#include <bits/stdc++.h>
using namespace std;
bool f(vector<int> v,int i){
    bool b=true;
    if(v[i]==0 || v[i]==1){
        b=false;
        return b;

    }
    for(int j=2;j<v[i];j++){

        if(v[i]%j==0){
            b=false;
            break;
        }


    }
    return b;
}
int main(){
    int n,i,cnt=0;
    cin>>n;
    vector <int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0) {
            v[i]=(v[i])*(-1);
        }
    }

    for(i=0;i<n;i++){
        if(f(v,i)>0){
            cnt++;
        }
    }
    cout<<cnt;


}