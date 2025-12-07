#include <iostream>
using namespace std;

int main() {
    int x[10]; // declare array of size 10 (extra space for insertion)
    int n = 5; // current size of array

    // Fill with first 5 natural numbers
    for (int i = 0; i < n; i++) {
        x[i] = i + 1; // stores 1, 2, 3, 4, 5
    }

    // Insert a new value at the end
    x[n] = 99; // add 99 at the last position (index n, which is 5)
    n++; // increase array size (n becomes 6)

    // Print updated array
    cout << "After Insertion: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}