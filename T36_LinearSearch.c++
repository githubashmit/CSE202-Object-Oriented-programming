#include<iostream>
using namespace std;
int main(){
    int a[20] , key,i,n,c=-1;
    cout<<"Enter the number of elements:\t";
    cin>>n;
    cout<<"Enter the elements:\t";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be found \t";
    cin>>key;
    for(i=0;i<n;i++)
        if(a[i]==key){
            cout<<"key found at location\t"<<i+1;
            c++;
            break;
        }
        if(c==1){
            cout<<"element not found in the list at position";
        }
        return 0;
    
}