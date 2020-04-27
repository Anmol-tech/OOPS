#include <iostream>
#include <fstream>


using namespace std;

class File {
    fstream file;
public:
    File(string str) {
        file.open(str, ios::in | ios::app);
    }

    void insert_data(string str) {
        file << str << endl;
        cout << "\nValue inserted\n";
    }

    void read_data() {
        string str;
        cout << "\nFile Data : \n";
        while (!file.eof()) {
            getline(file, str);
            cout << str << endl;
        }
    }

    void seekg(int distance, string from) {
        if (from == "beg")
            file.seekg(distance, ios::beg);
        else if (from == "cur")
            file.seekg(distance, ios::cur);
        else if (from == "end")
            file.seekg(distance, ios::end);
        else
            cout << "Invalid Argument";
    }

    ~File() {
        file.close();
    }
};

int main() {
    File info("info.txt");
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    string str = " This file is created by C++ file handling";
    info.insert_data(str);
    info.seekg(0, "beg");
    info.read_data();
}