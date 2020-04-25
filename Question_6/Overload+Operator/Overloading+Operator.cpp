#include <iostream>

using namespace std;

class Point {
    int x;
    int y;
public:
    void setValues(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void showValues() {
        cout << "\nX : " << x << "\tY : " << y;
    }

    friend Point operator+(Point &, Point &);
};

Point operator+(Point &obj1, Point &obj2) {
    Point res;
    res.x = obj1.x + obj2.x;
    res.y = obj1.y + obj2.y;
    return res;
}

int main() {
    Point point1, point2, result;
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    point1.setValues(4, 5);
    point2.setValues(7, 3);
    result = point1 + point2;
    cout << "Value of Point 1:";
    point1.showValues();
    cout << "\nValue of Point 2:";
    point2.showValues();
    cout << "\nSum of Points :";
    result.showValues();
}