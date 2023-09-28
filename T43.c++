#include <iostream>
#include <string>
using namespace std;

int main() {
    string str("microsoft");

    for (char& c : str) {
        c = toupper(c);
    }

    cout << str << endl;

    return 0;
}