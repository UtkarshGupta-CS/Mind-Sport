#include <iostream>

using namespace std;

void swap(int val1, int val2){
   int temp = val1;
   val1 = val2;
   val2 = temp;
}

int partition(int arr[], int start, int end){
   int pivot = arr[end];
   int pIndex = arr[start];
   for (int i = start; i<end-1;i++ ){
      if(arr[i] <= pivot){
         swap(arr[i], pIndex );
         pIndex++;
      }
   }
   swap(arr[pIndex], arr[end]);
   return pIndex;
}

void quickSort(int arr[],int start ,int end){
   int pIndex = partition(arr,start,end);
   quickSort(arr, start , pIndex-1);
   quickSort(arr,pIndex+1,end);
}
int main(){
   int n; cin>>n;
   int input[n];
   for(int i=0;i<n;i++){
      cin>>input[i];
   }
   quickSort(input,0,n-1);
   for(int j = 0 ; j<n ;j++){
      cout<<input[j]<<" ";
   }
}