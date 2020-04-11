#include <iostream>

using namespace std;

class Dictionary {
    int key;
    string value;
public:
    void input() {
        cout << "Enter the key:";
        cin >> key;
        cout << "Enter the value:";
        cin >> value;
    }

    void output() {
        cout << "\nKey:" << key << "\tValue:" << value;
    }

    static void print_details() {
        cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    }
};


int main() {
    int i;
    Dictionary dict[5];
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    for (i = 0; i < 2; i++) {
        cout << "\nIteration " << i + 1 << endl;
        dict[i].input();
    }
    for (i = 0; i < 2; i++)
        dict[i].output();
}

