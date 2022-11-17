#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    string s;

    for (int i = 0; i < t; i++) {
        int flag = 0;
        for (int j = 0; j < 8; j++) {
            cin >> s;
            if (s == "RRRRRRRR") {
                flag = 1;
            }
        }

        if (flag == 1) {
            cout << "R\n";
        } else {
            cout << "B\n";
        }
    }


    return 0;
}
