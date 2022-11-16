#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;
    if (k % 2 || k == 2) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
