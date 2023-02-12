#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 4, 6, 3, 6, 9, 1};
  set<int> unique_elements;

  cout << "Initial Array: ";
  for (int i : arr) {
    cout << i << " ";
    unique_elements.insert(i);
  }
  cout << endl;

  if (unique_elements.size() == arr.size()) {
    cout << "Array already unique!" << endl;
  } else {
    arr.clear();
    arr.insert(arr.begin(), unique_elements.begin(), unique_elements.end());
    cout << "Array with no duplicate elements: ";
    for (int i : arr) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}
