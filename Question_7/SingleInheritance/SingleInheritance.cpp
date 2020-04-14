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


int main() {
    Bus obj(34, "old delhi");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "Bus number :" << obj.getNumber();
    cout << "\tBus route :" << obj.getRoute();
}