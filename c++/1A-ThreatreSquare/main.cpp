#include <iostream>

using namespace std;
int main() {

    long long int n, m, a;

    cin >> n >> m >> a;

    long long int w = n / a;
    long long int h = m / a;
    if (n % a != 0) {
        ++w;
    }
    if (m % a != 0) {
        ++h;
    }
    cout << w * h;
    return 0;
}
