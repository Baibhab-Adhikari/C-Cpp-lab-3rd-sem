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
class Faculty : virtual public Person
{
protected:
    int facultyID;
    string department;

public:
    Faculty(string personName, int personAge, int facultyID, string dept)
        : Person(personName, personAge), facultyID(facultyID), department(dept) {}

    void displayFacultyDetails()
    {
        displayPersonDetails();
        cout << "Faculty ID: " << facultyID << endl;
        cout << "Department: " << department << endl;
    }
};

// Child Class 2
class Student : virtual public Person
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

// Child Class 3
class Exam : public Faculty, public Student
{
private:
    int examScore;

public:
    Exam(string personName, int personAge, int facultyID, string dept, int studentRollNumber, string studentCourse, int score)
        : Person(personName, personAge), Faculty(personName, personAge, facultyID, dept), Student(personName, personAge, studentRollNumber, studentCourse), examScore(score) {}

    void displayExamDetails()
    {
        displayStudentDetails();
        displayFacultyDetails();
        cout << "Exam Score: " << examScore << endl;
    }
};

// Main driver code
int main()
{
    Exam exam("John Doe", 21, 1001, "Computer Science", 12345, "CS101", 85);

    cout << "Exam Details:" << endl;
    exam.displayExamDetails();

    return 0;
}
