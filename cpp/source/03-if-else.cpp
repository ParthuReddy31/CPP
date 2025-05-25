#include <iostream>
using namespace std;

int main () {
    bool isTodayWeekend = false;
    bool isTodaySunny = false;

    // if (isTodaySunny){
    //     cout << "Goto Park" << endl;
    // }
    // else {
    //     cout << "Take an umbrella" << endl;
    // }

    // isTodaySunny? cout << "Goto Park" << endl : cout << "Take an umbrella" << endl;

    // if (isTodaySunny && isTodayWeekend) {
    //     cout << "Goto Park and Enjoy" << endl;
    // }
    // else if (isTodayWeekend && !isTodaySunny) {
    //     cout << "Goto to Park but take an umbrella" << endl;
    // }
    // else if (!isTodayWeekend && isTodaySunny) {
    //     cout << "Goto to office but take an umbrella" << endl;
    // }
    // else {
    //     cout << "Goto to work and do some work" << endl;
    // }

    if (isTodayWeekend) {
        if (isTodaySunny){
            cout << "Goto Park and Enjoy" << endl;
        }
        else {
            cout << "Goto Park and Enjoy, but don't forget to take an umbrella" << endl;
        }
    }

    else {
        cout << "Goto to work and do some work" << endl;
    }
    }




