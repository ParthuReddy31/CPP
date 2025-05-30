#include<iostream>
#include<string>
using namespace std;

class Time{
private:
    int Hour;
    int Minute;
    void addHour();
public:
    void setHour(int);
    void setMin(int);
    int getHour() const;
    int getMin() const;
    void addMin() ;

    string displayTime() const;
};

    void Time::setHour(int hr){
        Hour = hr;
    }

    void Time::setMin(int min){
        Minute = min;
    }

    int Time::getHour() const {
        return Hour;
    }

    int Time::getMin() const{
        return Minute;
    }

    void Time::addHour(){
        if (Hour == 12 ){
            Hour = 1;
        }
        Hour ++;
    }

    void Time::addMin(){
        if(Minute == 59){
            Minute = 0;
            addHour();
        }
        Minute ++;
    }

    string Time::displayTime() const{
        string hourString = to_string(Hour);
        string minString = to_string(Minute);
        if(minString.length()==1){
            minString = "0" + minString;
        }
        return hourString + ":" + minString;

    }



int main(){
    Time t;

    t.setHour(3);
    t.setMin(43);
    cout << t.displayTime() << endl;
    t.addMin();
    cout << t.displayTime() << endl;
    t.addMin();
    cout << t.displayTime() << endl;

}