#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            cout << "Even number: " << i << endl;
        } else {
            cout << "Odd number: " << i << endl;
        }
    }

    return 0;
}
