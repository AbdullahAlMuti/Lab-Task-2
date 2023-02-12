#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int array1[] = {1, 4, 6, 3, 6, 9};
    int array2[] = {5, 3, 7, 1, 2, 6};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    vector<int> common;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                common.push_back(array1[i]);
            }
        }
    }

    sort(common.begin(), common.end());
    common.erase(unique(common.begin(), common.end()), common.end());

    if (common.empty()) {
        cout << "No common element!" << endl;
    } else {
        cout << "Common elements: ";
        for (int i = 0; i < common.size(); i++) {
            cout << common[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

