#include<iostream>
using namespace std;
int main(){
    int a[3][4]={{1,2,3,4},{4,5,6,7},{7,8,10,11}};
    cout<<"Array in matrix:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<4;j++){
            cout<<a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}