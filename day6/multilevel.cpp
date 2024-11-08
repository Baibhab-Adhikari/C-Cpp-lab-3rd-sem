// Multilevel Inhertance : Student Registration System

#include <iostream>
#include <string>
using namespace std;

// Parent Class
class Person
{
protected:
    string name;
    int age;

public:
    Person(string personName, int personAge) : name(personName), age(personAge) {}

    void displayPersonDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Child Class 1
class Student : public Person
{
protected:
    int rollNumber;
    string course;

public:
    Student(string personName, int personAge, int studentRollNumber, string studentCourse)
        : Person(personName, personAge), rollNumber(studentRollNumber), course(studentCourse) {}

    void displayStudentDetails()
    {
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

// Child Class 2
class RegisteredStudent : public Student
{
private:
    int semester;
    bool isRegistered;

public:
    RegisteredStudent(string personName, int personAge, int studentRollNumber, string studentCourse, int studentSemester, bool registrationStatus)
        : Student(personName, personAge, studentRollNumber, studentCourse), semester(studentSemester), isRegistered(registrationStatus) {}

    void displayRegistrationDetails()
    {
        displayStudentDetails();
        cout << "Semester: " << semester << endl;
        cout << "Registration Status: " << (isRegistered ? "Registered" : "Not Registered") << endl;
    }
};

// Main driver code
int main()
{
    RegisteredStudent regStudent("Alice Smith", 20, 12345, "Computer Science", 4, true);

    // display details
    cout << "Registered Student Details:" << endl;
    regStudent.displayRegistrationDetails();

    return 0;
}
