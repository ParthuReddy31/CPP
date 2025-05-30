#include <iostream>
#include <queue>
using namespace std;

void printQ(queue<int> numQ)
{
    while (!numQ.empty())
    {
        cout << numQ.front() << " ";
        numQ.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> numQueue;
    numQueue.push(3);
    numQueue.push(4);
    numQueue.push(5);
    numQueue.push(6);

    if(numQueue.empty()){
        cout << "Queue is empty ---" << endl;
    }
    cout << "Queue is not empty -_-" << endl;

    cout << "--- Before (POP) operation  ---" << '\n';
    cout << "Elements are:- ";
    printQ(numQueue);
    
    cout << "Stack size: " << numQueue.size() << endl;
    cout << "Front Element: " << numQueue.front() << endl;
    cout << "--- After (POP) operation ---" << '\n';
    numQueue.pop();
    cout << "Stack size: " << numQueue.size() << endl;
    cout << "Fornt Element: " << numQueue.front() << endl;
    cout << "Back Element: " << numQueue.back() << endl;
    cout << "Elements are:- ";
    printQ(numQueue);
}