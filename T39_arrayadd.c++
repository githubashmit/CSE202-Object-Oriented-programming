#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], s[2][2];

    // Input for the first matrix
    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    // Input for the second matrix
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    // Adding the two matrices and storing the result in s
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    // Printing the first matrix
    cout << "First Matrix is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    // Printing the second matrix
    cout << "Second Matrix is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    // Printing the result matrix (sum)
    cout << "Sum of the matrices is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << s[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
