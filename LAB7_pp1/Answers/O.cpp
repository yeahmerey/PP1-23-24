#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    string result = "";

    while (n > 0) {
        int rem = n % m;

        if (rem < 10) {
            result += char('0' + rem);
        } else {
            result += char('A' + (rem - 10));
        }

        n /= m;
    }

    if (result.empty()) {
        result = "0";
    }

    for(int i = result.size()-1 ; i>=0 ; i--){
        cout << result[i] ;
    }



    return 0;
}