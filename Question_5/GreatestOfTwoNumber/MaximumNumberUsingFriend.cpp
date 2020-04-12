#include <iostream>

using namespace std;

class Number;

class Compare {
public:
    int greatest_number(Number &num_1, Number &num_2);
};


class Number {
    int number;
public:
    Number(int point) {
        this->number = point;
    }

    friend int Compare::greatest_number(Number &num_1, Number &num_2);
};

int Compare::greatest_number(Number &num_1, Number &num_2) {
    return (num_1.number > num_2.number) ? num_1.number : num_2.number;
}

int main() {
    Number point_1(12), point_2(15);
    Compare compare;
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "Greatest Number is : " << compare.greatest_number(point_1, point_2);
}
