#include <iostream>
using namespace std;

int main() {
    int c, choice;
    int occupied = 0, maxOccupied = 0, rejected = 0;

    cout << "Enter parking capacity (1-20): ";
    cin >> c;

    if (c < 1 || c > 20) {
        cout << "Error input"<< endl;
        return 1;
    }

    do {
        cout << "Menu: 1-Enter, 2-Exit, 3-Status, 0-Quit: " << endl;
        cin >> choice;

        if (choice == 1) {
            if (occupied < c) {
                occupied++;
                if (occupied > maxOccupied) {
                    maxOccupied = occupied;
                }
            }
            else {
                cout << "Parking is full!" << endl;
                rejected++;
            }
        }
        else if (choice == 2) {
            if (occupied > 0) {
                occupied--;
            }
            else {
                cout << "Parking is empty!" << endl;
                rejected++;
            }
        }
        else if (choice == 3) {
            cout << "Free spaces: " << c - occupied << endl;
        }
        else if (choice != 0) {
            cout << "Wrong choice << endl;
        }
    } while (choice != 0);

    cout << "Max occupied: " << maxOccupied << endl;
    cout << "Rejected operations: " << rejected << endl;

    return 0;
}