#include<iostream>
using namespace std;

int main()
{
    int n1=0, n2 =1, next_term , n;
    cout<<"Enter the value of n";
    cin >> n;

    cout <<"Fibonnaci Series";
    for (int i = 1; i <=n; i++)
    {
        if(i==1){
            cout<<n1<<",";
            continue;
        }
        if(i==2){
            cout<<n2<<",";
            continue;
        }
        next_term=n1+n2;
        n1=n2;
        n2=next_term;
        cout
    }
    
}