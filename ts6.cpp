
#include <iostream>

using namespace std;

int main() {
    int matrix1[3][3] = {{1, 6, 7},
                        {2, 4, 8},
                        {3, 1, 9}};

    int matrix2[3][3] = {{1, 6, 7},
                        {2, 4, 8},
                        {3, 1, 9}};

    int result[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Result matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
