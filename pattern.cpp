// 12345
// 12345
// 12345
// 12345
// 12345

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    while(i<=n) {
        int j  = 1;
        while(j<=n) {
            cout << j;      // n-j+1
            j++;
        }
        i++;
        cout << endl;
    }

}