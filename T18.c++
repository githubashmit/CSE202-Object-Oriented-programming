/* write a program to print fibonnaci series using recursive function */
#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"The fibonacci series is: ";
    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}