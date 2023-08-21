#include<iostream>
#include<iomanip>
using namespace std;
union Data1{;
    int intvalue;
    float floatvalue;
    char charvalue;
};
struct Data2{
    int intvalue;
    float floatvalue;
    char charvalue;
};
int main(){
    Data1 mydata1;
    Data2 mydata2;
    mydata1.intvalue=42;
    cout<<"Integer value1: "<<mydata1.intvalue<<endl;
    mydata1.floatvalue=3.14;
    cout<<"Float value1: "<<mydata1.floatvalue<<endl;
    mydata1.charvalue='A';
    cout<<"Char value1: "<<mydata1.charvalue<<endl;
    mydata2.intvalue=34;
    cout<<"Integer value2: "<<mydata2.intvalue<<endl;
    mydata2.floatvalue=4.86;
    cout<<"Float value2: "<<mydata2.floatvalue<<endl;
    mydata2.charvalue='B';
    cout<<"Char value2: "<<mydata2.charvalue<<endl;
    return 0;
}