#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter number (1-1000000000): ";
    cin >> n;

    if (n < 1 || n > 1000000000) {
        cout << "Error input" << endl;
        return 1;
    }

    long long original = n;
    long long reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed) {
        cout << "Is palindrome" << endl;
    }
    else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
