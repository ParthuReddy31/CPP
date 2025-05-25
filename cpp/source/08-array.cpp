// #include <iostream>
// using namespace std;

// int main (){
//     int size = 4;
//     int oldValue[size] = { 23, 456, 754, 221 } ;
//     int newValue[size];
//     for (int i=0; i<size; i++){
//         newValue[i] = oldValue[i];
//     }

//     cout << "Copied values: ";
//     for (int i=0; i<size; i++ ){
//         cout << newValue[i] << " ";
//     }
// }
#include <iostream>
using namespace std;

int main() {
    const int size = 4;
    int oldValue[size] = {23, 456, 754, 221};
    int newValues[size];

    // Copying values
    for (int i = 0; i < size; i++) {
        newValues[i] = oldValue[i];
    }

    // Printing newValues array
    cout << "Copied values: ";
    for (int i = 0; i < size; i++) {
        cout << newValues[i] << " ";
    }
    cout << endl;

    return 0;
}
