#include <iostream>
using namespace std;
union Data{
    int intValue;
    char charValue;
    double doubleValue;
};
int main(){
    const int SIZE = 5;
    Data dataArray[SIZE];
}