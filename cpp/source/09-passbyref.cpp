#include <iostream>
using namespace std;


 void changeMe(int &myValue) {
    myValue = 200;
    cout << "myValue is " << myValue << endl;
    }

int main() {
    int number = 12;
    cout << "number is " << number << endl;
    changeMe(number);
    cout << "Back in main, number is " << number << endl;
    return 0;
   
}

