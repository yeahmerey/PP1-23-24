#include <bits/stdc++.h>
using namespace std;
int n;
int key(int size, int arrin1[], int arrin2[]);
int main(){
    cin >> n;
    int arr1[n], arr2[n];
    for(int i=0; i<n; ++i){
        cin >> arr1[i];
    }
    for(int j=0; j<n; ++j){
        cin >> arr2[j];
    }
    cout << key(n,arr1, arr2);
    return 0;
}
int key(int size, int arrin1[], int arrin2[]){
    int count=0, l=0;
    sort(arrin1, arrin1+size);
    sort(arrin2, arrin2+size);
    for(int j=0; j<size; ++j) {
        for (int k = l; k < size; ++k) {
            if (arrin1[j] == arrin2[k]) {
                count += 1;
                l = k + 1;
                break;
            }
        }
    }
    return count;
}