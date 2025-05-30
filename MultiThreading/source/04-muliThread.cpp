#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;

void add(){
    mtx.lock();
    for (int i=0; i<200; i++){
        cout << "+";
    } 
    mtx.unlock();
}

void sub(){
    mtx.lock();
    for (int i=0; i<200; i++){
        cout << "-";
    } 
    mtx.unlock();
}

int main (){

    // add();
    // sub();
    thread t1(add);
    thread t2(sub);
    t1.join();
    t2.join();
}