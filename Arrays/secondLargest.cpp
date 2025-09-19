#include <iostream>
#include <climits>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    int arr[] = {12, 10, 3, 4, 23, 44, 93, 30, 12, 44};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max1 = arr[0]; // largest
    int max2 = INT_MIN; // second largest

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;     // previous largest becomes second largest
            max1 = arr[i];   // update largest
        }
        else if (arr[i] < max1 && arr[i] > max2) {
            max2 = arr[i];   // update second largest
        }
    }

    cout << "Largest: " << max1 << endl;
    if (max2 != INT_MIN)
        cout << "Second Largest: " << max2 << endl;
    else
        cout << "No second largest element!" << endl;

    return 0;
}
