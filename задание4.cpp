#include <iostream>
using namespace std;

int main() {
    int r, c;
    int countHash = 0, countX = 0, countDot = 0;

    cout << "Enter rows and cols (3-8): ";
    cin >> r >> c;

    if (r < 3 || r > 8 || c < 3 || c > 8) {
        cout << "Error input" << endl;
        return 1;
    }

    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            if ((i == 1 || i == r) && (j == 1 || j == c)) {
                cout << "# ";
                countHash++;
            }
            else if ((i + j) % 3 == 0) {
                cout << "X ";
                countX++;
            }
            else {
                cout << ". ";
                countDot++;
            }
        }
        cout << endl;
    }

    cout << "X: " << countX << ", .: " << countDot << ", #: " << countHash << endl;

    return 0;
}