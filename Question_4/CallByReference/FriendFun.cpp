#include <iostream>

using namespace std;

class Point;

class Console {
public:
    void show(Point &point);
};

class Point {
    int x;
    int y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    // Friend Function
    friend void Console::show(Point &point);
};

void Console::show(Point &point) {
    cout << endl << "X : " << point.x;
    cout << endl << "Y : " << point.y;
}

int main() {
    Console console;
    Point point(2, 4);
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "Call by reference using friend function";
    console.show(point);
}