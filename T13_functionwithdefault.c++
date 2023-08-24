#include<iostream>
using namespace std;
void fun(int);
void fun(int , int);
void fun(int i)
{
    std::cout <<"Value of i:"<<i<<std::endl;
}
void fun(int a , int b=9)
{
    std::cout<<"Value of a is:"<<a<<std::endl;
    std::cout<<"Value of b is:"<<b<<std::endl;
}
int main(){
    fun(12);
    return 0;
}