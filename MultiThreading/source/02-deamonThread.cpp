#include <iostream>
#include <thread>

using namespace std;

void Deamon()
{
    while (1)
    {
        cout << "Deamon is running..., No one stops me until Main Function Terminates ^-^ \n";
        this_thread::sleep_for(1000ms);
    }
}

int main()
{
    thread t1(Deamon);

    t1.detach();
    //t1.join();
    this_thread::sleep_for(7000ms);
    cout << "Main function is Terminated\n";
    return 0;
}