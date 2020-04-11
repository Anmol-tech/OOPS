#include <iostream>

using namespace std;


class LinearSearch {
    int i;
    int flag = 0;

public:
    void search(int arr[], int item, int length) {
        for (i = 0; i < length; i++) {
            if (arr[i] == item) {
                flag = 1;
                break;
            }
        }
        result();
    }

    void result() {
        if (flag == 1)
            cout << "The element is in array at " << i + 1 << endl;
        else
            cout << "Element Not Found" << endl;
    }

};

class Console {
    int length;
    int arr[40];
    int item;

public:

    static void print_details() {
        cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    }

    void input() {
        cout << "Enter the size:";
        cin >> length;
        cout << "Enter the Element:";
        for (int i = 0; i < length; i++)
            cin >> arr[i];
        cout << "Enter the element want to seach:";
        cin >> item;
        search();
    }

    void search() {
        LinearSearch search;
        search.search(arr, item, length);
    }
};

int main() {
    Console console;
    console.print_details();
    console.input();

}