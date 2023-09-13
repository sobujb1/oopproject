#include <bits/stdc++.h>
using namespace std;

//ABSTRACTION
class Calculator{
    public:
        virtual int add(int x, int y) = 0;
        virtual int sub(int x, int y) = 0;
};

class Excalculator : public Calculator {
    public:
        int add (int x, int y){
            return x+y;
        }
        int sub (int x, int y){
            return x-y;
        }
};



class Person{
    public:
        string firstName;
        string lastName;
        int age;

        //POLYMORPHISM(OVERLOADING)
        void setfirstName(string f){
            firstName = f;
        }
        string getfirstName(){
            return firstName;
        }

        void setlastName(string l){
            lastName = l;
        }
        string getlastName(){
            return lastName;
        }

        void setage(int a){
            age = a;
        }
        int getage(){
            return age;
        }
};

//INHERITANCE
class Student:public Person{
    public: //ENCAPSULATION
        int studentID;
        string grade;

        void setstudentID(int i){ //ENCAPSULATION(set get method)
            studentID = i;
        }
        int getstudentID(){
            return studentID;
        }

        void setgrade(string g){
            grade = g;
        }
        string getgrade(){
            return grade;
        }

        void displaypersoninformation(){
            cout << "Student Information- " << endl;
            cout << "First Name: " << firstName << endl;
            cout << "Last Name: " << lastName << endl;
            cout << "Age: " << age << endl;
            cout << "Student ID: " << studentID << endl;
            cout << "Grade: " << grade << endl;
        }
};

class Teacher:public Person{
    public:
        int employeeID;
        string subject;

        void setemployeeID(int e){
            employeeID = e;
        }
        int getemployeeID(){
            return employeeID;
        }

        void setsubject(string s){
            subject = s;
        }
        string getsubject(){
            return subject;
        }

        void displaypersoninformation(){
            cout <<"                        "<< endl;
            cout << "Teacher Information- " << endl;
            cout << "First Name: " << firstName << endl;
            cout << "Last Name: " << lastName << endl;
            cout << "Age: " << age << endl;
            cout << "Employee ID: " << employeeID << endl;
            cout << "Subject: " << subject << endl;
        }
};

int main() {
    Excalculator ex;
    cout <<ex.add(18,20) <<endl;
    cout <<ex.sub(50,20) <<endl;



    Student s1;
    Teacher t1;

    s1.setfirstName("SOBUJ");
    s1.setlastName("AHAMED");
    s1.setage(24);
    s1.setstudentID(462);
    s1.setgrade("A+");

    t1.setfirstName("MAHDI");
    t1.setlastName("HASAN");
    t1.setage(28);
    t1.setemployeeID(10);
    t1.setsubject("C++");

    s1.displaypersoninformation();
    t1.displaypersoninformation();

    return 0;
}
