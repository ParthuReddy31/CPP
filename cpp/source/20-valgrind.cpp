#include <iostream>
#include <cstdlib>  // for malloc and free

using namespace std;

char* function1(int n) {
    char* ptsr;
    int i = 0;  // initialize 'i'

    ptsr = (char*) malloc(n * sizeof(char));  // allocate memory

    if (!ptsr) {
        return nullptr;  // malloc failed
    }

    while (i < n) {
        ptsr[i] = 0;
        i++;
    }

    return ptsr;  // return pointer to allocated memory
}

int main() {
    char* str;
    int number = 100;

    str = function1(number);  // allocate memory

    if (str != nullptr) {
        cout << "Memory allocated and initialized." << endl;
        
        // Use memory (optional test)
        str[0] = 'A';
        cout << "str[0] = " << str[0] << endl;

        free(str);  // ✅ free the memory to prevent leak
    } else {
        cout << "Memory allocation failed!" << endl;
    }

    return 0;
}