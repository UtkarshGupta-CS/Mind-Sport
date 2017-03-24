#include <iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr1[size],arr2[size],arr3[size];
    for(int i = 0;i<size;i++){
        cin>>arr1[i];
    }
    for(int i= 0;i<size;i++){
        cin>>arr2[i];
    }
    for(int i= 0;i<size;i++){
        arr3[i] = arr1[i]+arr2[i];
        cout<<arr3[i]<<" ";
    }
}