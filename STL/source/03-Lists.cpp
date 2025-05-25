#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> numList;
    numList.push_front(100);
    numList.push_back(90);
    numList.push_back(80);
    numList.push_back(70);
    numList.push_front(10);

    for(list<int>::iterator i=numList.begin(); i!=numList.end(); i++){
        cout << *i << endl;
    }

}
