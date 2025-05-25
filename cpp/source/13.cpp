#include <iostream>
#include <string>
using namespace std;

void printNumber( int* number){
    cout << "Printing number- " << *number << '\n'; 
}

void printLetter( char* letter){
    cout << "Printing letter- " << *letter << '\n'; 
}

void printAny( void* ptr, char type){
    switch(type){
        case 'i': cout << *((int*)ptr) <<'\n'; break;
        case 'c': cout << *((string*)ptr) <<'\n'; break;
        case 'f': cout << *((float*)ptr) <<'\n'; break;
        case 'd': cout << *((double*)ptr) <<'\n'; break;
    }

}
int main()
{
    int a = 5;
    std::string letter = "string";
    double b = 2332;
    float g = 2.33343;

    // printNumber(&a);
    // printLetter(&letter);
    printAny(&a, 'i');
    printAny(&g, 'f');
    printAny(&b, 'd');
    printAny(&letter, 'c');

    // cout << "value of a = " << a << endl;
    // cout << "value of address &a = " << &a << '\n';
    // float* ptr = &a;
    // cout <<  "value of ptr = " << ptr << '\n'; 
    // cout <<  "value of (dereferencing) *ptr  = " << *ptr << '\n';
    // *ptr = 10.00;
    // cout <<  "value of (dereferencing) *ptr  = " << *ptr << '\n';
    // cout << "value of address a = " << a << '\n';

}
