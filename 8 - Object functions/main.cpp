#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    string major;
    double gpa;

    Student(string _name, string _major, double _gpa)
    {
        name = _name;
        major = _major;
        gpa = _gpa;
    }

    // If gpa 3.5 or greater the student has honors. The original tutorial wanted to use if functions but that sounds ridicules to me.
    bool hasHonors()
    {
        return gpa >= 3.5;
    }
};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.name << (student1.hasHonors() ? " has honors" : " doesn't have honors") << endl;
    cout << student2.name << (student2.hasHonors() ? " has honors" : " doesn't have honors") << endl;

    return 0;
}
