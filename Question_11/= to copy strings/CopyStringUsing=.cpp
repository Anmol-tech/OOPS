#include <iostream>
#include <cstring>

using namespace std;

class String {
    char *string;
    int size;
public:
    String(char *arr = "") {
        setString(arr);
    }

    void setString(char *arr) {
        size = strlen(arr);
        string = new char[size + 1];
        strcpy(string, arr);
    }

    void show() {
        cout << string;
    }

    char *getString() {
        return string;
    }

    ~String() {
        delete string;
    }

    String operator=(String *obj) {
        String str_1;
        str_1.setString(obj->getString());
        return str_1;
    }
};



int main() {
    String str("Hello World");
    String other("");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "\nString 1:";
    str.show();
    cout << "\nString 2:";
    other = str;
    other.show();
}