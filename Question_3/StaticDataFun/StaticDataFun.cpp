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

    static void print_size() {
        cout << "\nNumber of Objects : " << size;
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
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    Dictionary dict, dict2;
    dict.add(3, "hello");
    dict.output();
    dict2.add(6, "bye");
    dict2.output();
    Dictionary::print_size();
}

