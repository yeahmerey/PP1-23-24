#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    int min ;
    int a[n][m];
    int t , k ;
    int c[m] ;
    for(int i = 0 ; i < n ; i++){
        for(int j= 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:"<< endl;
    for(int j = 0 ; j < m ; j++){
        min = 100  ;
        c[j] = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(a[i][j]< min){
                min = a[i][j];
                t  = i ; k = j ;
                c[j]=min ;
            }

        }
        cout << t+1 <<";" << k+1 <<endl;

    }
    cout<<endl;
    int sum = 0 ;
    cout << "Their sum:" <<endl ;
    for(int j = 0 ; j < m ; j++){
        sum+=c[j];
    }
    cout << sum ;
    return 0 ;
}