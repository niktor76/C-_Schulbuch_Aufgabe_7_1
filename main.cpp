#include <iostream>
using namespace std;


int main() {
    const int size = 10;
    int numbers[size];

    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int sum = 0;
    for (int j = 0; j < size; ++j) {
        sum += numbers[j];
    }
    cout << "The sum of all numbers you entered is " << sum << "." << endl;
    return 0;
}
