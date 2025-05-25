#include <iostream>
using namespace std;

template <typename T>
class Calculater
{
public:
    T add(T a, T b)
    {
        return a + b;
    }

    T sub(T a, T b)
    {
        return a - b;
    }

    T multiply(T a, T b)
    {
        return a * b;
    }

    T divide(T a, T b)
    {
        if (b==0){
            cout << "Incorrect, Divident can't be Zero" << '\n';
            return 0;
        }
        return a / b;
    }
};

int main()
{
    cout << "--------int--------" << '\n';

    Calculater<int> intCalculater;
    cout << intCalculater.add(5, 7) << endl;
    cout << intCalculater.sub(5, 7) << endl;
    cout << intCalculater.multiply(5, 7) << endl;
    cout << intCalculater.divide(10, 5) << endl;

    cout << "--------float--------" << '\n';

    Calculater<float> floatCalculater;
    cout << floatCalculater.add(5, 7) << endl;
    cout << floatCalculater.sub(5, 7) << endl;
    cout << floatCalculater.multiply(5, 7) << endl;
    cout << floatCalculater.divide(0, 10) << endl;
}