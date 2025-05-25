#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> numbers;
    //numbers.push_back(10);
    for (int i = 0; i <= 10; i++)
    {
        numbers.push_back(i);
    }
    for (auto i = numbers.cbegin(); i != numbers.cend(); i++)
    {
        //*i = 20;
        cout << *i << '\n';
        // cout << &i << '\n';
        // cout << &(*i) << '\n';
    }


    cout << "Capacity : " << numbers.capacity() << '\n' ;
    cout << "Size : " << numbers.size() << '\n' ;
    cout << "MaxSize : " << numbers.max_size() << '\n' ;
    numbers.resize(5);
    cout << "Size : " << numbers.size() << '\n' ;
    cout << "Element at(3) is " << numbers.at(3) << '\n';
}

 
