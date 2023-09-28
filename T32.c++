#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    void increment() {
        x++;
    }
};

int main() {
    MyClass arr[3];
    for (int i = 0; i < 3; i++) {
        arr[i].increment();
    }
    cout << arr[2].x << endl;
    return 0;
}