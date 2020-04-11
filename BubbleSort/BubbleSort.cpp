#include <iostream>

using namespace std;

class BubbleSort {
// TO DO BUBBLE SORT
private:

    //Swap function for value in array
    void swap(int *x, int *y) {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }

public:
// Bubble Sorting
    void sort(int arr[], int length) {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length - i - 1; j++) {
                if (arr[j] > arr[j + 1])
                    swap(&arr[j], &arr[j + 1]);
            }
        }
    }
};

class Console {
    // TO DO ALL console work
    int length;
    int arr[40];
    int item;

public:
    static void print_details() {
        cout << "\nName : Anmol Sharma\t Roll.No.14" << endl;
    }

    void input() {
        cout << "Enter the size:";
        cin >> length;
        cout << "Enter the Element:";
        for (int i = 0; i < length; i++)
            cin >> arr[i];
        cout << "Array before Sorting" << endl;
        print_array();
        sort();
        cout << "\nArray after Sorting" << endl;
        print_array();
    }

    void sort() {
        BubbleSort sort;
        sort.sort(arr, length);
    }

    void print_array() {
        for (int i = 0; i < length; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Console console;
    console.print_details();
    console.input();
}