#include <iostream>
using namespace std;


int main() {
    int arr[100]{0,};
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        int flag = 0;
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[j] == arr[k]) {
                    cout << "NO\n";
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
        if (!flag) {
            cout << "YES\n";
        }
    }
    return 0;
}
