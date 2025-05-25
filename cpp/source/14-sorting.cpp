#include <iostream>
using namespace std;

int main(){
    int array[7] = {22, 33, 44, 55, 66, 77, 88 };
    for (int i = 0; i<=7; i++){
        if (i%2 == 0){
            cout << array[i] << ", " ;
        }
    }
    cout << " ." << '\n';

}