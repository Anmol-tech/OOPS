#include <iostream>

using namespace std;

template<typename T>
T max(T array[], int length) {
    T max_number = array[0];
    for (int i = 0; i < length; i++)
        if (max_number < array[i])
            max_number = array[i];
    return max_number;
}

int main() {
    int length;
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "Enter the length of array :";
    cin >> length;
    int arr[length];
    cout << "Enter numbers in array :";
    for (int i = 0; i < length; i++)
        cin >> arr[i];
    cout << "\nMaximum number in array is " << max(arr, length);

}