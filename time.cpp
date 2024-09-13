#include "iostream"
using namespace std;

class Time {
private:
    int hour;
    int minutes;
    int sec;

public:
    Time() {
        hour = 0;
        minutes = 0;
        sec = 0;
    }
    Time(int hour, int minute, int sec) {
        this->hour = hour;
        this->minutes = minute + sec / 60;  // handle overflow from seconds to minutes
        this->sec = sec % 60;

        this->hour += this->minutes / 60;  // handle overflow from minutes to hours
        this->minutes = this->minutes % 60;
    }

    void add(Time T1, Time T2) {
        sec = T1.sec + T2.sec;
        minutes = T1.minutes + T2.minutes + sec / 60;
        sec = sec % 60;
        hour = T1.hour + T2.hour + minutes / 60;
        minutes = minutes % 60;
    }

    void display() {
        cout << hour << ":" << minutes << ":" << sec << endl;
    }
};

int main() {
    Time T3;
    Time T1(11, 49, 60);
    Time T2(9, 34, 9);

    T1.display();
    T2.display();




    T3.add(T1, T2);
    T3.display();

    return 0;
}