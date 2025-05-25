#include <iostream>
using std::string;

class Employee{

    public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void introduceMe(){
        std::cout << "Name- " << Name << "; Company- " << Company << "; and my Age- " << Age << std::endl;
    }

};


int main(){

    Employee employee1 = Employee("Parthu", "Texas State University", 26);
    employee1.introduceMe();
    Employee employee2 = Employee("SriKanth", "MS Ramaiah University", 26);
    employee2.introduceMe();
}