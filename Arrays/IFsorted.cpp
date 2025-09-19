#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    
    int arr[] = {10, 12, 9, 6, 41, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool sorted = true; // assume sorted initially

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;  // no need to check further
        }
    }

    if (sorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is NOT sorted" << endl;

    return 0;
}
