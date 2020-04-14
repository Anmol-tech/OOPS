#include <iostream>

using namespace std;

class Trasport {
    int number;
public:
    int getNumber() {
        return number;
    }

    //
    virtual void setNumber(int number) {
        this->number = number;
    }
};

class viaRoad : public Trasport {
    string route;
public:
    viaRoad(string &route) {
        this->route = route;
    }

    // virtual function
    virtual string &getRoute() {
        return route;
    }

    void setRoute(string &route) {
        this->route = route;
    }
};

class Bus : public viaRoad {
    string type;
public:
    Bus(int number, string route) : viaRoad(route) {
        Trasport::setNumber(number);
        type = "Bus";

    }
};

class Cab : public viaRoad {
    string type;
public:
    Cab(int number, string route) : viaRoad(route) {
        type = "Cab";
        viaRoad::setNumber(number);
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
    Bus obj(32, "old delhi");
    viaRoad *via = &obj;
    Cab obj1(12, "new delhi");
    Metro obj2(124, "Yellow");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "\nBus number :" << via->getNumber();
    cout << "\tBus route :" << via->getRoute();
    cout << "\nCab number :" << obj1.getNumber();
    cout << "\tCab route :" << obj1.getRoute();
    cout << "\nMetro number :" << obj2.getNumber();
    cout << "\tMetro Color :" << obj2.getColor();
}


