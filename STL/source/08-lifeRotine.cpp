#include <iostream>
#include <queue>
using namespace std;

void printRoutine(queue<string> DailyRoutine){
    while(!DailyRoutine.empty()){
        cout << DailyRoutine.front() << endl;
        DailyRoutine.pop();
    }
    cout << "Function Queue Size: " << DailyRoutine.size() << endl;
}

int main (){
    queue<string> routine;
    routine.push("wakeup at 6am ");
    routine.push("Workouts at 6:30am ");
    routine.push("Eat breakfast at 8am ");
    routine.push("Goto Office at 9am ");

    // cout << routine.front() << endl;
    cout << "main() Queue Size: " << routine.size() << endl;
    // routine.pop();
    // cout << routine.size() << endl;
    // cout << routine.front() << endl;
    // cout << routine.back() << endl;

    printRoutine(routine); 
}