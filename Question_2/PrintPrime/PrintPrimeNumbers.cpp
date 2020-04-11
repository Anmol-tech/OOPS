#include <iostream>

using namespace std;

class Console {
    int upto;
    int isPrime;
public:
    void find_prime() {
        cout << "Prime Number:\n";
        for (int i = 2; i <= upto; i++) {
            isPrime = 0;
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = 1;
                    break;
                }
            }
            if (isPrime == 0)
                cout << i << "  ";
        }
    }

    static void print_details() {
        cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    }

    void input() {
        cout << "Enter the number upto be printed : ";
        cin >> upto;
        find_prime();
    }
};

int main() {
    Console console;
    console.print_details();
    console.input();
}