#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    c = a + (b % 10) + (b / 100);
    cout << c;
    return 0;
}