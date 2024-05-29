#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n , count= 0;
    cin >> n;
    vector <int> a(n);

    for (int i = 0 ;  i < n ; i++){
        cin >> a[i];
        if (a[i]>0) {
            count++;
        }
    }
    cout << count ;
    return 0;
}
