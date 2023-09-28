#include <iostream>
using namespace std;
class ArrayProcessor {
public:
   static void processArray(int arr[][3], int rows) {
      for (int i = 0; i < rows; i++) {
         for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
         }
         cout << endl;
      }
   }
};
int main() {
   int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
   ArrayProcessor::processArray(arr, 2);
   return 0;
}