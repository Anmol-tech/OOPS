#include <iostream>

using namespace std;

class Dictionary {
private:
    int key{};
    string value;
public:
    static int size;

    Dictionary() {
        size++;
    };

    void add(int k, string v) {
        key = k;
        value = v;
    }

    void remove() {
        key = 0;
        value = "";
    }

    void output() {
        cout << "\nKey:" << key << "\tValue:" << value;
    }
};

int Dictionary::size = 0;

int main() {
    int i;
    Dictionary dict, dict2;
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    dict.add(3, "hello");
    dict.output();
    dict2.add(6, "bye");
    dict2.output();
    cout << "\nNumber of Objects : " << Dictionary::size;
}

