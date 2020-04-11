#include <iostream>
#include <cmath>

using namespace std;

class Armstrong {
    int findLength(int number) {
        int length = 0;
        while (number > 0) {
            number /= 10;
            length++;
        }
        return length;
    }

public:
    void isArmstrong(int number, int &armstrongNumber) {
        int length = findLength(number);
        int rem;
        while (number > 0) {
            rem = number % 10;
            number /= 10;
            armstrongNumber += pow(rem, length);
        }
    }
};

class Console {
    int number{};
    int armstrongNumber;
    Armstrong checkArmstrong;
public:

    Console();

    static void print_details() {
        cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    }

    void input() {
        cout << "Enter the number:";
        cin >> number;
        checkArmstrong.isArmstrong(number, armstrongNumber);
        result();
    }

    void result() {
        if (number == armstrongNumber)
            cout << "The Number " << number << " is Armstrong." << endl;
        else
            cout << "The Number " << number << " is not Armstrong" << endl;
    }
};

Console::Console() {
    armstrongNumber = 0;
}


int main() {
    Console console;
    Console::print_details();
    console.input();
}