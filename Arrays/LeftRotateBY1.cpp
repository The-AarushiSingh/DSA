#include <iostream>

using namespace std;

int main() {
    cout << "Left Rotating an array by 1 Place!" << endl;

    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"theoretical answer after rotation: {2,3,4,5,6,7,8,9,1}"<<endl;
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp= arr[0];
    for(int i=1;i<n;i++){
      arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    
    cout<<"Resulted Answer: ";
    for(int i=0;i<n;i++){
      
      cout<<arr[i]<<" ";
    }

    return 0;
}