#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = { 1, 45, 54, 71, 76 };
    int arr2[] = { 1, 54, 7, 5, 4, 6, 12 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int check = 0;

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    cout << "First Array: ";
    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";
    cout << endl;
1,
    cout << "Second Array: ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";
    cout << endl;

    vector<int> v(n1 + n2);
    vector<int>::iterator it, st;

    it = set_intersection(arr1, arr1 + n1,arr2, arr2 + n2,v.begin());

    for (st = v.begin(); st != it; ++st){
        check = 1;
        cout << *st << " ";
    }
    cout << '\n';

    if(check==0)
        cout << "No common element!";

    return 0;
}
