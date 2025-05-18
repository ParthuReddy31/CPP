#include <iostream>
using namespace std;

int main() {
    int a = 5;
    char b = 'A';
    float c = 3.14;
    double d = 2.71828;
    bool e = true;
    string f = "Hello, World!";
    string colour[10] = {"red", "green", "blue", "yellow", "purple"};
    cout << "before changing index 1:-" <<  colour[1] << endl;
    colour[1] = "black";
    cout << "After changing index 1:-" <<  colour[1] << endl;
    cout << "Enter Colour " << endl;
    cin >> colour[2] ;
    cout << "entered colour is " << colour[2] << endl;
    cout << f << endl;
    return 0;
}
