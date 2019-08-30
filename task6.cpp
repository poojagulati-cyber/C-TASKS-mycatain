#include<iostream>
using namespace std;

int main() {

    int a[10];
    int n, temp;

    cout << "Enter Size of an Array :";
    cin>>n;

    cout << "\nEnter  Array  Elements :";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\nArray List After Sorting :";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
