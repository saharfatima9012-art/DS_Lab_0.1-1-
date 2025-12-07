#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n; // user enters number of students

    int* marks = new int[n]; // dynamic array for marks

    // Input marks
    for (int i = 0; i < n; i++) {
        cout << "Enter mark of student " << i + 1 << ": ";
        cin >> marks[i]; // take input
    }

    // Print all marks
    cout << "\nMarks entered: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    // Calculate average, max, and min
    int sum = 0, maxMark = marks[0], minMark = marks[0];
    for (int i = 0; i < n; i++) {
        sum += marks[i]; // add all marks

        if (marks[i] > maxMark) maxMark = marks[i]; // find highest
        if (marks[i] < minMark) minMark = marks[i]; // find lowest
    }

    cout << "Average = " << ((sum / (float)n)) << endl;
    cout << "Highest = " << maxMark << endl;
    cout << "Lowest = " << minMark << endl;

    delete[] marks; // free memory
    return 0;
}