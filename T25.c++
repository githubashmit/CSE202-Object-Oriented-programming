#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="ABC";
    string s2="XYZ";

    int x=s1.compare(s2);
    if(x==0){
        cout<<"string are same"<<endl;
    }else if(x>0){
        cout<<"string s1 is larger then s2"<<endl;
    }else{
        cout<<"string s2 is larger then s2"<<endl;
    }
    return 0;
}