#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionTwoPointer(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            // avoid duplicates in result
            if (result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }
            i++;
            j++;
        }
        else if (a[i] < b[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    return result;
}

int main() {
    vector<int> a = {1, 2, 2, 3, 4, 5};
    vector<int> b = {2, 2, 3, 5, 6};

    vector<int> inter = intersectionTwoPointer(a, b);

    cout << "Intersection: ";
    for (int x : inter) cout << x << " ";
    return 0;
}
