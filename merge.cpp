#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> array1 = {10, 20, 30, 40, 50};
  vector<int> array2 = {1,2,3,4,5,6,7,8};

  vector<int> new_array;
  new_array.insert(new_array.end(), array1.begin(), array1.end());
  new_array.insert(new_array.end(), array2.begin(), array2.end());

  for (int i = new_array.size() - 1; i >= 0; i--) {
    cout << new_array[i] << " ";
  }

  return 0;
}

