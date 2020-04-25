#include <iostream>

using namespace std;

template<typename T>
T max(T number1, T number2, T number3) {
    if (number1 > number2 && number1 > number3)
        return number1;
    else if (number2 > number1 && number2 > number3)
        return number2;
    else
        return number3;
}

int main() {
    int result = max(23, 53, 12);
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    cout << "The Maximum number is " << result;
}

