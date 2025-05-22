#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string Name;
    string Company;
    double Salary;
    int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setSalary(double salary){
        Salary = salary;
    }
    double getSalary(){
        return Salary;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void introduceMe(){
        cout << "Name- " << Name << "; Company- " << Company << "; and my Age- " << Age << endl;
    }
    
    Employee(string name, string company, double salary, int age){
        Name = name;
        Company = company;
        Salary = salary;
        Age = age;
    }
};

int main(){

    Employee employee1 = E
}