#include <iostream>

using namespace std;

class Trasport {
    int number;
public:
    int getNumber() {
        return number;
    }

    void setNumber(int number) {
        this->number = number;
    }
};

class Bus : public Trasport {
    string route;
public:
    Bus(int number = 0, string route = "") {
        Trasport::setNumber(number);
        this->route = route;

    }

    const string &getRoute() {
        return route;
    }

    void setRoute(string &route) {
        this->route = route;
    }
};

class Metro : public Trasport {
    string color;
public:
    Metro(int number = 0, string color = "") {
        Trasport::setNumber(number);
        this->color = color;
    }

    string &getColor() {
        return color;
    }

    void setColor(string &color) {
        this->color = color;
    }
};

int main() {
    Bus obj(34, "old delhi");
    Metro obj1(12, "Red");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "\nBus number :" << obj.getNumber();
    cout << "\tBus route :" << obj.getRoute();
    cout << "\nMetro number :" << obj1.getNumber();
    cout << "\tMetro Color :" << obj1.getColor();

}


