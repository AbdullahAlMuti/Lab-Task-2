#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int arr[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    unordered_map<int, int> frequency;

    for (int i = 0; i < 10; i++) {
        frequency[arr[i]]++;
    }

    for (auto it = frequency.begin(); it != frequency.end(); it++) {
        cout << it->first << " occurs = " << it->second << " times" << endl;
    }

    return 0;
}

