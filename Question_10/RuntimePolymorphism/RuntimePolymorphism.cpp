#include <iostream>

using namespace std;

class vehicle {
    int number;
public:
    vehicle() {
        number = 4;
    }

    virtual void show() {
        cout << "In Vehicle Class\n";
        cout << "Number : " << number;
    }
};

class car : public vehicle {
    int number;
public:
    car() {
        number = 5;
    }

    void show() {
        cout << "In car class";
        cout << "\nNumber is " << number;
    }
};

int main() {
    vehicle *ptr = new car;
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    ptr->show();
}