#include <iostream>
using namespace std;

struct Student
{
    string name;
    double idNum;
    int crdHrs; 
    float Gpa;
};

void inputStudent (Student* s){
    cout << "Enter student name: " ;
    getline(cin,s->name);

    cout << "Enter student IdNum: " ;
    cin >> s->idNum;

    cout << "Enter student crdHrs: " ;
    cin >> s->crdHrs;

    cout << "Enter student Gpag: " ;
    cin >> s->Gpa;

    cout << "Name: " << s->name << "; " <<"IdNum: " << s->idNum << "; " << "Credit Hrs: " << s->crdHrs << "; " << "GPA: " << s->Gpa << "; " << '\n';
}

int main(){
    // Student s1 = {"John Wick", 234422112, 9, 3.4};
    // Student* studentPtr = &s1;
    // cout << "student Gr call : "   << (*studentPtr).name << '\n';
    // cout << "student Name with '->' : "   << studentPtr->name << '\n';
    // cout << "student IdNum is: "   << studentPtr->idNum << '\n';
    Student s1;
    inputStudent(&s1);
}
