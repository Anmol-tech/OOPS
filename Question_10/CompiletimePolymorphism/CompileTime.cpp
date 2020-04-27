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

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void showValues() {
        cout << "\nX : " << x << "\tY : " << y;
    }

};

Point operator-(Point &obj1, Point &obj2) {
    Point res;
    int x, y;
    x = obj1.getX() - obj2.getX();
    y = obj1.getY() - obj2.getY();
    res.setValues(x, y);
    return res;
}

int main() {
    Point point1, point2, result;
    cout << "Name : Anmol Sharma \t R.no : 014";
    point1.setValues(4, 5);
    point2.setValues(7, 3);
    result = point1 - point2;
    cout << "\nValue of Point 1:";
    point1.showValues();
    cout << "\nValue of Point 2:";
    point2.showValues();
    cout << "\nSubtraction of Points :";
    result.showValues();
}