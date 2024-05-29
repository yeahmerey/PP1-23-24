#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v1[i]=v[i];
    }
    reverse(v1.begin(),v1.end());


    for(int i=0;i<n;i++ ){
        if(v[i]==v1[i]){
            cout<<"OK"<<endl;
        }
        else{
            cout<<"Instead of "<<v[i]<<" here was "<<v1[i]<<endl;
        }
    }
}