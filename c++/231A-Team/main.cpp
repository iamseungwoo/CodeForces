#include <iostream>

using namespace std;

int arr[1000][3];

int main() {
    int n, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];;
        if (arr[i][0] + arr[i][1] + arr[i][2] >= 2) {
            ++ans;
        }
    }
    cout << ans;
    return 0;
}
