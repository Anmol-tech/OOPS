#include <iostream>

using namespace std;


template<typename T>
void bubbleSort(T array[], int length) {
    for (int i = 0; i < length; i++)
        for (int j = 0; j < length - i - 1; j++)
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
}

int main() {
    int length;
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "Enter the length of array :";
    cin >> length;
    int arr[length];
    cout << "Enter the numbers in array:";
    for (int i = 0; i < length; i++)
        cin >> arr[i];
    cout << "\nArray Before Sorting\n";
    for (int i:arr)
        cout << i << " ";
    bubbleSort<int>(arr, length);
    cout << "\nArray After Sorting\n";
    for (int i:arr)
        cout << i << " ";
}