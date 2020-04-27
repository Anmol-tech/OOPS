#include <iostream>
#include <cstring>

using namespace std;

class String {
    char *string{};
    int size{};
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
        cout << string << endl;
    }

    void str_cat(String other) {
        char temp[size];
        strcpy(temp, string);
        size = size + strlen(other.string);
        string = new char[size + 1];
        for (int i = 0; i < strlen(temp) - 1; i++)
            string[i] = temp[i];
        int j = 0;
        for (int i = strlen(temp) - 1; i < size; i++) {
            string[i] = other.string[j];
            j++;
        }

    }

    ~String() {
        delete string;
    }
};

void operator+(String &str1, String str2) {
    str1.str_cat(str2);
}

int main() {
    String str("Hello");
    String str2("World");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "String 1: ";
    str.show();
    cout << "String 2: ";
    str2.show();
    str + str2;
    cout << "String after concatenation : ";
    str.show();
}