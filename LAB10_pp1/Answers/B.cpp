#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

long long power(long long int i, long long int k, long long int pow){
    if(k==0) return pow;
    pow*=i;
    k--;
    return power(i, k, pow);

}

int main(){
    long long int n, pow=1;
    cin >> n;

    for(int i=0; i<=n; i++){
        long long int k=i;
        cout << power(i, k, pow) <<" ";
    }