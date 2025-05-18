#include <iostream>
using namespace std;

int * duplicateArray(int *array, int size){
    int *newArray;
    if (size<0){
        return NULL;
    }
    newArray = new int [size];
    for (int i=0; i<size; i++){
        newArray[i] = array[i];
    }
    return newArray;
}

int main(){
    int a[5] = {2, 4, 5, 7, 8};
    int *b = duplicateArray(a,5);
    for (int c=0; c<5; c++){
        if (a[c] == b[c]){
            cout << b[c] << " ok" << endl;
        }
    }
    delete []b;
}