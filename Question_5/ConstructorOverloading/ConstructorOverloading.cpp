#include <iostream>

using namespace std;

class Complex {
    int real;
    int img;
public:
    Complex() {
        real = 0;
        img = 0;
    }

    // Constructor Overloading
    Complex(int real, int img) {
        this->real = real;
        this->img = img;
    }

    Complex(int real) {
        this->real = real;
        this->img = 0;
    }

    void show() {
        cout << "\nReal : " << real << "\tImaginary : " << img;
    }
};

int main() {
    Complex obj_1, obj_2(2, 3), obj_3(12);
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    obj_1.show();
    obj_2.show();
    obj_3.show();
}