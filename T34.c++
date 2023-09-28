#include<iostream>
using namespace std;
int main(){
    int a[100] , i , n ,k,item;
    cout<<"how many no. to strore in array";
    cin>>n;
    cout<<"Enter the number";
    for ( i = 0; i < n-1; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the no. and its position";
    cin>>item>>k;
    k=k-1;
    for(i=n-1;i>=k;i--){
        a[i+1]=a[i];
    }
    a[k]=item;
    cout<<"Content of the array\n";
    for(i=0;i< n;i++){
        cout<<" "<<a[i]<<" ";
    }
    return 0;
    
}