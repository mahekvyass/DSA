#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = a[0];
    int secondLargest = a[0];

    
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    
    for (int i = 0; i < n; i++) {
        if (a[i] != largest && a[i] > secondLargest) {
            secondLargest = a[i];
        }
    }

    cout << "Second largest element = " << secondLargest;

    return 0;
}
