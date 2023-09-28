#include<iostream>
using namespace std;
int main(){
    int ar[100] , beg,mid ,end ,i,n,search,c=-1;
    cout<<"How many numbers in the array:";
    cin>>n;
    cout<<"Enter"<<n<<"number in ascending order-->";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    beg=0;end=n-1;
    cout<<"Enter a number to search:";
    cin>>search;
    while(beg<=end){
        mid=(beg+end)/2;
        if(ar[mid]==search){
            cout<<"\nitem found at position"<<(mid+1);
            c=c+1;
        }
        if(search>ar[mid])
            beg=mid+1;
        else
            end=mid-1;
    }if(c==-1){
        cout<<"\nSorry!"<<search<<"doesnot found:";
    }
        
    return 0;
}
