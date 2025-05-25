#include <iostream>
using namespace std;

int main (){

    string animals[5] = { "bee", "dog", "cow", "goat", "cat" };

    cout << "Animal are : "; 

    for(int i=0; i<5; i++ ){
        cout << animals[i] << ", ";
    }
    cout << endl; 


    for (int row=1; row<=3; row++){
        for (int col=1; col<=3; col++){
            cout << row * col << " ";
        }
        cout << endl;
    }
}

