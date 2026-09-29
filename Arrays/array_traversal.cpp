#include <iostream>
using namespace std;

int main() {

    int A[5];

    // Taking input
    for(int i = 0; i < 5; i++) {
        cin >> A[i];
    }

    // Printing the array
    for(int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
