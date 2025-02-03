#include<iostream>
using namespace std;

int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    int search;
    cout<<"Enter element you want to search: ";
    cin>>search;
    int found=0;
    for(int i=0;i<8;i++) {
        if(arr[i]==search) {
            found=1;
        }
    }
    if(found==1) {
        cout<<"Your searched element was found";
    }
    else {
        cout<<"not found---->womp womp";
    }
    
}
