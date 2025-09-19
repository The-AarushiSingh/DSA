#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    set<int> st;
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);   // inserting into set removes duplicates automatically
    }

    cout << "Array after removing duplicates: ";
    for (auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
