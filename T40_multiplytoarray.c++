#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], product[2][2];

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

    // Multiply the two matrices and store the result in 'product'
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            product[i][j] = 0; // Initialize the product element to 0
            for (int k = 0; k < 2; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
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

    // Printing the product matrix
    cout << "Product of the matrices is:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
