#include <iostream>
using namespace std;

int main() {
    int x[6] = {10, 20, 30, 40, 50, 60}; // initialize array
    int n = 6; // current size of array

    int pos = 2; // delete element at index 2 (third element = 30)

    // Shift elements left to remove the element
    for (int i = pos; i < n - 1; i++) {
        x[i] = x[i + 1]; // overwrite with next element
    }

    n--; // decrease size after deletion

    // Print updated array
    cout << "After Deletion: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}