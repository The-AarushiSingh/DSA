//COMPLETE ARRAY IS TAKEN AS UNSORTED ARRAY 
//ELT AT FIRST INDEX OF UNSORTED ARRAY IS TAKEN TO BE MIN AND SOTED
//SWAP SMALLEST ELT WIT FIRST INDEX OF UNSORTED ARRAY

#include <iostream>

using namespace std;

void selectionSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minIndex]){
        minIndex=j;
      }
    }
    swap(arr[i],arr[minIndex]);
  }
    
}
void printArray(int arr[],int n){
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main() {
    cout << "Hello, selectionSort!" << endl;
    int arr[]={9,2,3,7,5,6,3,8,3,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}