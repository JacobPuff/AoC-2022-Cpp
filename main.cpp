#include <iostream>
#include "days/Days.h"
using namespace std;

int main() {
    cout << "Select a day: ";
    int day;
    cin >> day;

    cout << "Day " << day << "\n";
    switch(day) {
        case 1:
            day1();
            break;
        default:
            cout << "Day not found\n";
            return 1;
    }
    return 0;
}