#include <iostream>

using namespace std;

class ReverseSum {
public:
    void reverseSum(int number, int &sum, int &reverse) {
        int reminder;
        while (number > 0) {
            reminder = number % 10;
            number = number / 10;
            sum += reminder;
            reverse = (reverse * 10) + reminder;
        }
    }
};

class Console {
    int number;
    int sum;
    int reverse;
    ReverseSum reverseSum;
public:

    Console() {
        sum = 0;
        reverse = 0;
    }

    static void print_details() {
        cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    }

    void input() {
        cout << "Enter the number:";
        cin >> number;
        reverseSum.reverseSum(number, sum, reverse);
    }

    void result() {
        cout << "The reverse of " << number << " is : " << reverse << endl;
        cout << "The Sum of " << number << " is : " << sum;
    }
};


int main() {
    Console console;
    console.print_details();
    console.input();
    console.result();
}