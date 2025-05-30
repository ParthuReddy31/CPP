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
        if (Age>=25){
        Age = age;
        }
    }
    int getAge(){
        return Age;
    }

    void introduceMe(){
        cout << "Name- " << Name << "; Company- " << Company << "; Earning -> " << Salary <<" P/M; and my Age- " << Age << endl;
    }
    
    Employee(string name, string company, double salary, int age){
        Name = name;
        Company = company;
        Salary = salary;
        Age = age;
    }
};

int main(){

    Employee employee1 = Employee("Parthu", "Infosys", 30000, 24);
    Employee employee2 = Employee("Pranay", "TCS", 60000, 29);
    Employee employee3 = Employee("Yochana", "CTS", 40000, 25);

    employee1.introduceMe();
    employee2.introduceMe();
    employee3.introduceMe();
    employee1.setAge(21);
    cout << employee1.getName() << " is " << "working in " << employee1.getCompany() << " Earning -> " << employee1.getSalary() <<" P/M; and my Age- " << employee1.getAge() << endl;
}