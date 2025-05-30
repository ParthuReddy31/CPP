#include <iostream>
using namespace std;
class Instruments{
public:
    virtual void Makesound() = 0;
    // {
    //     cout << "Make Sound...\n";
    // }
};

class Accordion : public Instruments{
public: 
    void Makesound(){
        cout << "Accordian is Playing...\n"; 
    }
};

class Piano: public Instruments {
public: 
    void Makesound(){
        cout << "Piano is Playing...\n"; 
    }
};
int main (){
    //Instruments* i1 = new Instruments;
    Instruments* i2 = new Accordion;
    Instruments* i3 = new Piano;

    // i1->Makesound();
    // i2->Makesound();
    Instruments* instru[] = { i2, i3};
        for (int i = 1; i<3; i++){
            instru[i]->Makesound();
        }
}