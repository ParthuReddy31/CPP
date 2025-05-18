#include <iostream>
using namespace std;

float sum(float a, float b) {
    return a+b ;
}

void nameAge(string name, int age = 2){
    cout << "My name is " << name << endl;
    cout << "I'm " << age << " years old" << endl;
}

int main(){
    cout << sum(2.3, 5) << endl;
    cout << sum(32.4, 5) << endl;
    cout << sum(24, 5.5) << endl;
    cout << sum(3, 5) << endl;
    cout << "----Name Function----" << endl;
    nameAge("parthu");
}