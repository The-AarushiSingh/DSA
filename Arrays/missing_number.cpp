#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& a) {
    int n = a.size() + 1;  // total numbers should be size+1
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int num : a) {
        actualSum += num;
    }

    return expectedSum - actualSum;
}

int main() {
    vector<int> a = {1, 2, 3, 5};  // use vector
    cout << "Missing number is: " << missingNumber(a) << endl;
    return 0;
}
