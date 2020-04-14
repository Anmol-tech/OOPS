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

class viaRoad : public Trasport {
    string route;
public:
    const string &getRoute() {
        return route;
    }

    void setRoute(string &route) {
        this->route = route;
    }
};

class Bus : public viaRoad {
    string type;
public:
    Bus(int number = 0, string route = "") {
        Trasport::setNumber(number);
        type = "Bus";
        viaRoad::setRoute(route);
    }
};

class Cab : public viaRoad {
    string type;
public:
    Cab(int number, string route) {
        type = "Cab";
        viaRoad::setNumber(number);
        viaRoad::setRoute(route);
    }
};
//class Metro:public Trasport{
//    string color;
//public:
//    Metro(int number = 0, string color = ""){
//        Trasport::setNumber(number);
//        this->color = color;
//    }
//    string &getColor() {
//        return color;
//    }
//
//    void setColor(string &color) {
//        this->color = color;
//    }
//};

int main() {
    Bus obj(34, "old delhi");
    Cab obj1(12, "new delhi");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "\nBus number :" << obj.getNumber();
    cout << "\tBus route :" << obj.getRoute();
    cout << "\nCab number :" << obj1.getNumber();
    cout << "\tCab route :" << obj1.getRoute();
}


