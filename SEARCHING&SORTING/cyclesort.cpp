#include <bits/stdc++.h>
using namespace std;

void cyclicSort(vector<int>& nums) {
    int i = 0;
    while (i < nums.size()) {
        int correct = nums[i] - 1; // correct index of nums[i]
        if (nums[i] != nums[correct]) {
            swap(nums[i], nums[correct]); // put number at correct index
        } else {
            i++;
        }
    }
}

int main() {
    vector<int> arr = {3, 5, 2, 1, 4};

    cout << "Before Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    cyclicSort(arr);

    cout << "After Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
