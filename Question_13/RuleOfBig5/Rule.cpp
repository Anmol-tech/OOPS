#include <iostream>
#include <cstring>

using namespace std;

/*Rule of Big 5, if any of the following functions are implemented in a class
    then each and everyone of them should be implemented
        1. Copy Constructor
        2. Copy Assignment Operator
        3. Destructor
        4. Move Constructor
        5. Move Assignment Operator
 */

class String {
private:
    char *s;
    int size;

public:

    String() {
        s = nullptr;
    }

    String(char *arr) {
        size = strlen(arr);
        s = new char[size + 1];
        strcpy(s, arr);
    }

    //Copy Constructor
    String(String &str) {
        s = str.s;
    }

    // Move Constructor
    String(String &&st) : size(5) {
        s = st.s;
        size = st.size;

        st.s = nullptr;
        st.size = 0;
    }

    //Copy Assignment Operator
    String operator=(String const &obj) {
        String str_1;
        str_1.s = obj.s;
        return str_1;
    }

    //Move Assignment Operator
    String operator=(String const &&obj) {
        if (this != &obj) {
            delete[] s;
            String str_1;
            str_1.s = obj.s;
            return str_1;
        }
        return *this;
    }

    void show() {
        cout << s << "\n";
    }

    ~String();
};

//Destructor
String::~String() {
    delete[]s;
}


class Console {
public:
    static void details() {
        cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    }

    void input(string abc) {

        String strng("abc");
        String("abc");

        String s("xyz");
        String string1(s);
    }
};

int main() {
    Console con;
    con.details();
    String str("String Class Implementing the Rule Of Big 5");
    str.show();
}