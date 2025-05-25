#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "While" << endl;
    int counter = 11;
    int DoWileCounter = 11;

    while (counter <=10){
        cout << counter <<endl;
        counter++;
    }


    cout << "DoWhile" << endl;

    do{
        cout << DoWileCounter <<endl;
        DoWileCounter++;
    } while (DoWileCounter <=10);
}