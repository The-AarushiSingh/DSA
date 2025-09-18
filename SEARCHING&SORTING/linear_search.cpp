#include <iostream>

using namespace std;

void linearSearch(int arr[],int n, int target){
    bool found=false;
    for(int i=0;i<n;i++){
        if (arr[i]==target) {
        cout<<"found at"<<i<<endl;
        found=true;
        break;
        }
    }
    if(!found){
    cout<<"not found";
    }
    
}

int main() {
    cout << "Hello, LinearSearch!" << endl;
    int arr[]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter your target: ";
    cin>>target;
    
    linearSearch(arr,n, target);
    return 0;
}