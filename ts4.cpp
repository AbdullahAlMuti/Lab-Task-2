#include <iostream>

using namespace std;

int main() {
    int A[] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int n = sizeof(A) / sizeof(A[0]);

    int target;
    cout << "Enter an integer: ";
    cin >> target;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == target) {
            count++;
        }
    }

    cout << "The number " << target << " occurs " << count << " times in the array." << endl;

    return 0;
}
