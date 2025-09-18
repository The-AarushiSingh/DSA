#include <iostream>

using namespace std;

void bubbleSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
    bool isSwap=false;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwap=true;
        }
    }
    if(!isSwap){
        return;
    }
   }
    
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    cout << "Hello, bubbleSort!" << endl;
    int arr[]={2,29,3,466,9,7,66,4,33};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}