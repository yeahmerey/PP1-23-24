#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n , max= -1000000;
    cin >> n;
    vector <int> a(n);

    for (int i=0 ;  i < n ; i++){
        cin >> a[i];
        if (a[i]>max) {
            max = a[i];
        }
    }
    cout << max ;
    return 0;
}