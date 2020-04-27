#include <iostream>
#include <cstring>

using namespace std;

class String {
    char *string;
    int size;
public:
    String(char *arr) {
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
};


void operator=(String &des, String origin) {
    des.setString(origin.getString());
}

int main() {
    String str("Hello World");
    String other("");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "String 1:";
    str.show();
    cout << "String 2 :";
    other = str;
    other.show();
}