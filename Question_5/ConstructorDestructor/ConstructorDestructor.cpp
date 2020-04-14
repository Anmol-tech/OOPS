#include <iostream>
#include <cstring>

using namespace std;

class String {
    char *string;
    int size;
public:
    String(char *arr) {
        size = strlen(arr);
        string = new char[size + 1];
        strcpy(string, arr);
    }

    void show() {
        cout << string;
    }

    ~String() {
        delete string;
    }
};

int main() {
    String str("This is a string class using Constructor and Destructor.");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    str.show();
}