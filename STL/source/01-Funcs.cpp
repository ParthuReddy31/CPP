#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T>
T sub(T a, T b)
{
    return a - b;
}

template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

int main(){

    cout << add(5, 6)<<'\n';
    cout << sub(5, 6)<<'\n';
    cout << multiply(5, 6)<<'\n';

    cout << add(5.65, 6.35)<<'\n';
    cout << sub(5.65, 6.35)<<'\n';
    cout << multiply(5.65, 6.35)<<'\n';
}