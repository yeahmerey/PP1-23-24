#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n , max= -1000000;
    cin >> n;
    vector <int> a(n);
    int ind;

    for (int i=0 ;  i < n ; i++){
        cin >> a[i];
        if (a[i]>max) {
            max = a[i];
            ind=i;
        }
    }
    cout << ind+1 ;
    return 0;
}