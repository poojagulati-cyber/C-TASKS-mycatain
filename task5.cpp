#include<iostream>
using namespace std;

int main() {

    int array[5], i;
    int lg, sm;

    cout << "Enter any 5 Numbers :";
    for (i = 0; i < 5; i++) {
        cin >> array[i];
    }

    lg = array[0];
    sm = array[0];

    for (i = 0; i < 5; i++) {
        if (lg < array[i]) {
            lg = array[i];
        }

        if (sm > array[i]) {
            sm = array[i];
        }
    }
    cout << "\nLargest Element is :" << lg;
    cout << "\nSmallest Element is :" << sm;

    return 0;
}
