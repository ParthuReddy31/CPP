#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> stack){

}

int main()
{
    //empty, size, push, pop, top
    stack<int> numStack;
    numStack.push(0);
    numStack.push(1);
    numStack.push(2);
    numStack.push(3);
    if (numStack.empty()){
        cout << "the stack is empty -^-" << endl;
    }
    else
    cout << "Stack is not empty -_-" << endl;

    cout<< "Stack size: " << numStack.size() << endl;
    cout << "top element " << numStack.top() << endl;
    numStack.pop();
    cout<< "Stack size: " << numStack.size() << endl;
    cout << "top element " << numStack.top() << endl;

    cout << "top element " << numStack.top() << endl;
    
}