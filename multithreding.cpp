
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

atomic<int> counter;
int times = 10000;
mutex mtx;

void run(){
    for (int i=0; i<times; i++){
        //mtx.lock();
        counter++;
        //mtx.unlock();
    }
}

int main(){
    thread mythread1(run);
    thread mythread2(run);
    

    mythread1.join();
    mythread2.join();

    cout << counter << endl;
}
