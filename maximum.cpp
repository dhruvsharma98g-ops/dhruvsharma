#include <iostream>
using namespace std;

int main() {
    int n, max;

    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    cout << "Maximum element = " << max;

    return 0;
}