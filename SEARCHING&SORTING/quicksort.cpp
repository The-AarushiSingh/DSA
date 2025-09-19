#include <iostream>
#include <vector>
using namespace std;
//pass by reference; otherwise changes wouldn't reflect in answer
int partition(vector<int>& arr, int st, int end) {
    int idx = st - 1, pivot = arr[end];
    for (int j = st; j < end; j++) {
        if (arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int pivotIdx = partition(arr, st, end);
        quickSort(arr, st, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, end);
    }
}

int main() {
    cout << "Hello, QuickSort!" << endl;
    vector<int> arr = {5, 2, 6, 4, 1, 3};

    quickSort(arr, 0, arr.size() - 1);

    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
