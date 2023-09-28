#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="welcome"; string s1="abc"; string s2="123";
    cout<<"Size="<<str.size()<<endl;
    cout<<"Length"<<str.length()<<endl;
    cout<<"Max Size="<<str.max_size()<<endl;
    cout<<"Empty: "<<(str.empty() ? "yes": "no")<<endl;
    s1.swap(s2);
    cout<<"s1 value"<<s1<<"s2 value"<<s2;
    return 0;
}