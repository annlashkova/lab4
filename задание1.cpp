#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of cars (1-20): ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Error input" << endl;
        return 1;
    }

    double total_revenue = 0;
    double max_payment = -1;
    int max_car_number = 1;

    for (int i = 1; i <= n; i++) {
        int h;
        cout << "Enter the duration of the car parking " << i << " (1-24): ";
        cin >> h;

        if (h < 1 || h > 24) {
            cout << "Error input" << endl;
            return 1;
        }

        double payment = 0;
        if (h <= 2) {
            payment = h * 4;
        }
        else if (h <= 5) {
            payment = (2 * 4) + (h - 2) * 3;
        }
        else {
            payment = 2 * 4 + 3 * 3 + (h - 5) * 2;
        }

        total_revenue += payment;

        if (payment > max_payment) {
            max_payment = payment;
            max_car_number = i;
        }
    }

    cout << "Total revenue: " << total_revenue << endl;
    cout << "Average payment: " << total_revenue / n << endl;
    cout << "Car number with the highest payment: " << max_car_number << endl;

    return 0;
}
