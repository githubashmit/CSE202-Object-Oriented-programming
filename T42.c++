#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    string str {"Steve jobs"};
    char * cstr = new char [str.length() + 1];
    strcpy (cstr, str.c_str());
    char * p = strtok (cstr, " ");
while (p != 0)
{
    cout << p << "\n";
    p = strtok(NULL, " ");
}
delete[] cstr;
return 0;
}