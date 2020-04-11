#include <iostream>
#include <iomanip>

using namespace std;

class Time {
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h = 0, int m = 0, int s = 0);

    void set_time(int h, int m, int s);

    void show_time();
};

Time::Time(int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
}

void Time::set_time(int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
}

void Time::show_time() {
    cout << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << "\n";
}

int main() {
    Time time;
    cout << "\nName : Anmol Sharma\t Roll.No.14\n";
    time.show_time();
    time.set_time(21, 33, 12);
    time.show_time();
}