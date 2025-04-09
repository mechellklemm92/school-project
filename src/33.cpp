#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; i++) {
            if (i > n - i) {
                int temp = n - i;
                n -= temp;
                cout << "Swap: " << i << ", " << temp << endl;
            }
        }
    } else {
        for (int i = 1; i <= n / 2; i++) {
            if ((i + 1) == n && i % 2 != 0) {
                break;
            }
            int temp = n - i;
            n -= temp;
            cout << "Swap: " << i << ", " << temp << endl;
        }
    }
    
    return 0;
}
