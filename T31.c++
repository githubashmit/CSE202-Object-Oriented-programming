#include <iostream>
using namespace std;

class MyObject {
public:
    int value;

    MyObject(int val) {
        value = val;
    }
};

int main() {
    MyObject obj1(5);
    MyObject obj2(10);
    MyObject obj3(15);

    MyObject *arr[] = {&obj1, &obj2, &obj3};
    cout << arr[1]->value;

    return 0;
}