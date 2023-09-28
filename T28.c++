#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int* ptr = &arr[0][0];
    for (int i = 0; i < 9; i++) {
        cout << *(ptr + i) << " ";
    }
    return 0;
}