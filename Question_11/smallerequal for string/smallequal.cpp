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

    int getSize() {
        return size;
    }

    ~String() {
        delete string;
    }
};

bool operator<=(String str1, String str2) {
    if (str1.getSize() <= str2.getSize())
        return true;
    return false;
}

int main() {
    String str("Hello World");
    String str2("C++ OOPS");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "String 1: ";
    str.show();
    cout << "\nString 2: ";
    str2.show();

    bool result = str <= str2;
    if (result)
        cout << "\nThe string 1 is equal or smaller than string 2";
    else
        cout << "\nThe string 1 is greater than string 2";
}