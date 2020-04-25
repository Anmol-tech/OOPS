#include <iostream>

using namespace std;

class Point {
    int x;
public:
    void setValues(int x) {
        this->x = x;
    }

    void showValues() {
        cout << "\nX : " << x;
    }

    int getX() {
        return x;
    }

};

bool operator<=(Point &obj1, Point &obj2) {
    return (obj1.getX() <= obj2.getX());
}

int main() {
    Point point1, point2, result;
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    point1.setValues(4);
    point2.setValues(7);
    cout << "Value of Point 1:";
    point1.showValues();
    cout << "\nValue of Point 2:";
    point2.showValues();
    if (point1 <= point2)
        cout << "\nPoint 1 is smaller or equal than Point 2";
    else
        cout << "\nPoint 1 is greater than Point 2";
}
