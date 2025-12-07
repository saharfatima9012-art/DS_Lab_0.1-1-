#include <iostream>
using namespace std;

int main() {
    int x[6]; // declare an array of 6 integers

    // Fill array with even numbers
    for (int j = 0; j < 6; j++) {
        x[j] = 2 * j; // stores 0, 2, 4, 6, 8, 10
    }

    // Print array elements
    cout << "Static Array Elements: ";
    for (int j = 0; j < 6; j++) {
        cout << x[j] << " "; // print each element
    }
    cout << endl; // move to new line

    return 0; // end program
}